#include "numhash.c"
#include "sys/random.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define INSIZE (128)

// USE THIS TO TEST NUMHASH

int main(){
    uint8_t data[INSIZE] = {0};
    uint64_t out[8] = {0};
    uint64_t sum = 0;

    struct timespec s, e;

    /*
    for(int i = 0; i < 65536; i++){
        getrandom(data, INSIZE, 0);
        numhash0m((void*)out, 64, data, INSIZE);
    }
    */

    // getrandom(data, INSIZE, 0);
    clock_gettime(CLOCK_REALTIME, &s);
    numhash0m((void*)out, 64, data, INSIZE);
    clock_gettime(CLOCK_REALTIME, &e);

    for(int i = 0; i < 64; i++) printf("%02x", *((uint8_t*)out + i));
    puts("");

    for(int i = 0; i < 8; i++) sum += out[i];

    printf("SUM IS 0x%016lx\n", sum);
    printf("BANDWIDTH IS %lf MB/s\n", ((double)1000000000/(((e.tv_nsec - s.tv_nsec) + ((e.tv_sec - e.tv_sec)))/INSIZE))/(1024*1024));

    return 0;
}
