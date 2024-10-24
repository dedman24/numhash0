/*
   NUMHASH reference source code package - reference C implementations

   Copyright 2024, dedmanwalking <dedmanwalking@proton.me>.  You may use this under the
   terms of the CC0 1.0 Universal license, linked below:
   - CC0 1.0 Universal : http://creativecommons.org/publicdomain/zero/1.0
*/

#include "nkdm_problem.h"
#include "stdlib.h"
#include "string.h"

#define BLOCK 128
#define MAXOUTLEN 64

// numhash is a provably collision-resistant hash function based on the hardness of the numerical k-dimensional matching problem (with k = 516 in this case)
// it is NOT indistinguishable from a random oracle, and it should NOT be used as one; for example, the sum of all 8-byte sectors of the output is ALWAYS 0xc95ca4481e76c4dc.
// this also means that there (provably) DOESN'T EXIST ANY VALUE that hashes to any 64-byte number below 0xc95ca4481e76c4dc.
// NOTE: THIS IS ONLY TRUE WHEN OUTPUT LENGTH == 64 BYTES

// scrambles "in" according to "how", sums result to "out". any speedup in this is HUGE,
void scramble_sum(uint64_t out[8], uint64_t in[8], uint8_t how){
    uint64_t t[8];

    t[0] = in[0];
    t[1] = in[1];
    t[2] = in[2];
    t[3] = in[3];
    t[4] = in[4];
    t[5] = in[5];
    t[6] = in[6];
    t[7] = in[7];

// TODO: make this faster
    for(int i = 0; i < 8; i++){
        if(how & (1 << i)){
            uint64_t swaptmp = t[i];
            t[i] = t[(i + 1) & 7];
            t[(i + 1) & 7] = swaptmp;
        }
    }

    out[0] += t[0];                                                                     // can be parallelized using AVX/SSE
    out[1] += t[1];
    out[2] += t[2];
    out[3] += t[3];
    out[4] += t[4];
    out[5] += t[5];
    out[6] += t[6];
    out[7] += t[7];
}

// numhash compression function
void NUMHASH_ROUND(uint64_t final[8], uint8_t* in){
    uint64_t buffer[8] = {0};

    for(int i = 0; i < 128; i++){
        scramble_sum(buffer, (void*)nkdm_problem[i], in[i]);                            // without this "+" finding a collision is trivial
        scramble_sum(buffer, (void*)nkdm_problem[i + 1], (in[i]<<2) | (in[i]>>6));
        scramble_sum(buffer, (void*)nkdm_problem[i + 2], (in[i]<<4) | (in[i]>>4));
        scramble_sum(buffer, (void*)nkdm_problem[i + 3], (in[i]<<6) | (in[i]>>2));
    }
    
    final[0] = buffer[0];
    final[1] = buffer[1];
    final[2] = buffer[2];
    final[3] = buffer[3];
    final[4] = buffer[4];
    final[5] = buffer[5];
    final[6] = buffer[6];
    final[7] = buffer[7];
}

// unkeyed numhash0m
int numhash0m(void* out, const size_t outlen, const void* in, uint64_t inlen){
    if(outlen > MAXOUTLEN) return 0;

    uint64_t P[16] = { outlen, inlen };

    uint64_t input_processed = 0;
    while(inlen > BLOCK){                                                               // 2 compression function calls per 128 bytes
        NUMHASH_ROUND(P + 8, (uint8_t*)in + input_processed);
        NUMHASH_ROUND(P, (void*)P);
        inlen -= BLOCK;
        input_processed += BLOCK;
    }

    uint8_t buf[BLOCK];
    memcpy(buf, (uint8_t*)in + input_processed, inlen);
    memset(buf + inlen, 0, BLOCK-inlen);
    NUMHASH_ROUND(P + 8, buf);
    NUMHASH_ROUND(P, (void*)P);                                                         // numhash0m should NOT be used for hash keying
    
    memcpy(out, P, outlen);                                                             // truncates output
    return 1;
}


// numhash0 using MD construction, with support for keys; if keylen == 0, then output is the same as numhash0m
// returns 1 if it succeeds, 0 if it fails
int numhash0km(void* out, const size_t outlen, const void* in, uint64_t inlen, const void* key, uint64_t keylen){
    if(outlen > MAXOUTLEN) return 0;

    uint64_t P[16] = { outlen, inlen, keylen };

    uint64_t input_processed = 0;
    while(inlen > BLOCK){
        NUMHASH_ROUND(P + 8, (uint8_t*)in + input_processed);
        NUMHASH_ROUND(P, (void*)P);
        inlen -= BLOCK;
        input_processed += BLOCK;
    }

    uint8_t buf[BLOCK];
    memcpy(buf, (uint8_t*)in + input_processed, inlen);
    memset(buf + inlen, 0, BLOCK-inlen);
    NUMHASH_ROUND(P + 8, buf);
    NUMHASH_ROUND(P, (void*)P);

    if(keylen){
        if(keylen <= 128){                                                              // most common option; why would key be larger than 128B? IDK but numhash allows for "key" to be 2**64-1 bytes in length
            memcpy(buf, key, inlen);
            memset(buf + keylen, 0, BLOCK-keylen);
            NUMHASH_ROUND(P + 8, buf);
            NUMHASH_ROUND(P, (void*)P);
        }
        else{
            input_processed = 0;
            while(keylen > BLOCK){
                NUMHASH_ROUND(P + 8, (uint8_t*)key + input_processed);
                NUMHASH_ROUND(P, (void*)P);
                keylen -= BLOCK;
                input_processed += BLOCK;
            }

            memcpy(buf, (uint8_t*)key + input_processed, inlen);
            memset(buf + keylen, 0, BLOCK-keylen);
            NUMHASH_ROUND(P + 8, buf);
            NUMHASH_ROUND(P, (void*)P);
        }
    }

    if(keylen) NUMHASH_ROUND(P, (void*)P);                                              // only needed when keylen > 0 to avoid attacks described in paper
    memcpy(out, P, outlen);                                                             // truncates output
    return 1;
}
