# polynomial.c

We use the following forumla

<img src="https://latex.codecogs.com/svg.image?f(x)&space;=&space;1&plus;x&plus;\frac{x^{2}}{2!}&plus;&space;\frac{x^{3}}{3!}&plus;\frac{x^{4}}{4!}&plus;..." title="f(x) = 1+x+\frac{x^{2}}{2!}+ \frac{x^{3}}{3!}+\frac{x^{4}}{4!}+..." />

to estimate the value of e by setting x = 1.

- Take the order of polynomial as an input from the user.
- Compare against the true value of e and check for differences.
- Please use -lm option while performing gcc compile.

# Dynamic array allocation

- function : allocatearray() takes an integer as an argument and returns apointer to an allocated memory block of that many integers
- function : fillwithones() that takes a pointer to an array of integers and fills everycell of the array with a one
- function : printarray() that takes a pointer to an array of integers and prints it selements on screen.
- function : deallocatearray() that frees allocated memory to the array
