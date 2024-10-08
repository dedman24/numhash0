# numhash0
numhash0 is a provably-secure hash function I designed in a couple of weeks.
  - It is provably secure assuming finding a solution to a scrambled instance of the Numerical 512-Dimensional Matching problem [provided](https://github.com/dedman24/numhash0/blob/main/numhash/nkdm_problem.h) is hard.
  - It has a [small initial problem instance](https://github.com/dedman24/numhash0/blob/main/numhash/nkdm_problem.h) (occupies only 8KB).
  - It only uses adds and swaps.
  - Numhash0 is decently fast (40MB/s when compiled using clang and when the initial problem instance is in L1 cache).
    
For more info, [read the specification](https://github.com/dedman24/numhash0/blob/main/numhash/paper/NUMHASH%20PAPER.pdf).

## licenses
This work is released into the public domain with [CC0 1.0](https://github.com/dedman24/numhash0/blob/main/LICENSE).
