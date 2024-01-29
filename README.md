# Test Vectorization 

## Some Valuable Commands

> #### Using auto-vectorization
> - **Generates binary**
> 
> gcc-8.4.0 -march=rv64imafdcv0p7 main.c -O3 -ftree-vectorize  -fopt-info-vec -o main.exe
> - **Generates assembly**
> 
> gcc-8.4.0 -march=rv64imafdcv0p7 main.c -O3 -ftree-vectorize  -fopt-info-vec -c -S -o main.asm

> #### No auto-vectorization 
> - **Generates binary**
> 
> gcc-8.4.0 -march=rv64imafdcv0p7 main.c -O3 -fno-tree-vectorize  -fopt-info-vec -o main.exe
> - **Generates assembly**
> 
> gcc-8.4.0 -march=rv64imafdcv0p7 main.c -O3 -ftree-vectorize  -fopt-info-vec -c -S -o main.asm

> #### Using Pragma openMP 
> ##### Using this pragma before loops in the code 
> #pragma omp simd 
>
> #pragma omp simd aligned(a,b,....:32)
> - **Generates binary**
>   
> gcc-8.4.0 -march=rv64imafdcv0p7 main.c -O2 -fopenmp -o main.exe
> - **Generates assembly**
>   
> gcc-8.4.0 -march=rv64imafdcv0p7 main.c -O2 -fopenmp -c -S -o main.exe

