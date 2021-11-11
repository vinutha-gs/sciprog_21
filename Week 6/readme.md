# Matrix Multiplication

- Program to multiply two matrices C = A * B
- Define n=5,p=3, and q=4.
- Declare arrays A, B , C of type double
- Initialize matrix C to zero and matrix A such that $A_{ij} = i+j$ and $B_{ij} = i-j$
- Compute the value of C by multiplying matrix A and B

# Using makefile

- makefile commands present in mmc to combine two object files and produce result
- mm.c has a single function that accepts matrix a , b and multiplies them and stores it on array c
- main.c contains code to initialize matrix a and b. Call matrix multiplication  and prints the output
- use gcc -c main.c and gcc -c mm.c to generate the object files
- use gcc -o mmc main.o mm.o to compile
- ./mmc to see the output
