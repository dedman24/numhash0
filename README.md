# numhash0
Numhash0 is a provably-secure hash function I designed in a couple of weeks.
  - It is provably secure assuming finding a solution to a scrambled instance of the Numerical 512-Dimensional Matching problem [provided](https://github.com/dedman24/numhash0/blob/main/numhash/nkdm_problem.h) is hard.
  - It has a [small initial problem instance](https://github.com/dedman24/numhash0/blob/main/numhash/nkdm_problem.h) (occupies only 8KB).
  - It only uses modulo 2**64 addition and swaps between elements in a vector.
  - Numhash0 is decently fast (40MB/s when compiled using clang and when the initial problem instance is in L1 cache).
    
For more info, [read the specification](https://github.com/dedman24/numhash0/blob/main/numhash/paper/NUMHASH%20PAPER.pdf).

# WARNING
**NUMHASH and numerical k-dimensional matching have NOT been scrutinized enough to jusify using this in ANY project. The parameters (such as the number of columns in the matrix) were chosen arbitrarily.** 

## usage
Just download [nkdm_problem.h](https://github.com/dedman24/numhash0/blob/main/numhash/ndkm_problem.h) and [numhash.c](https://github.com/dedman24/numhash0/blob/main/numhash/numhash.c) and include numhash.c into your project.

## licenses
This work is released into the public domain with [CC0 1.0](https://github.com/dedman24/numhash0/blob/main/LICENSE).
