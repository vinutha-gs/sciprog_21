# printf.c

- This code demonstrates usage of different format strings to print out integer, float, charcter and string datatypes

# trapezoid.c

- Computing the area under the curve of f (x) where x 2 [a,b] can be done using the Trapezodial
rule:
<a href="https://www.codecogs.com/eqnedit.php?latex=\fn_cm&space;\int_{a}^{b}f(x)dx&space;\sim&space;(b-a/2N)(f(x0)&plus;&space;2f(x1)&space;&plus;&space;2f(x2)&space;&plus;...&plus;&space;2f(xN-1)&space;&plus;&space;f(xN))" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\fn_cm&space;\int_{a}^{b}f(x)dx&space;\sim&space;(b-a/2N)(f(x0)&plus;&space;2f(x1)&space;&plus;&space;2f(x2)&space;&plus;...&plus;&space;2f(xN-1)&space;&plus;&space;f(xN))" title="\int_{a}^{b}f(x)dx \sim (b-a/2N)(f(x0)+ 2f(x1) + 2f(x2) +...+ 2f(xN-1) + f(xN))" /></a>

where x0 = a and xN = b with N −1 equidistant points between a and b.

- Find the integral of f (x)=tan(x) from 0!p/3. Compare with the actual result: 
<a href="https://www.codecogs.com/eqnedit.php?latex=\fn_cm&space;\int_{0}^{\pi&space;/3}&space;\tan(x)&space;dx&space;=&space;\log&space;(2)" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\fn_cm&space;\int_{0}^{\pi&space;/3}&space;\tan(x)&space;dx&space;=&space;\log&space;(2)" title="\int_{0}^{\pi /3} \tan(x) dx = \log (2)" /></a>
1. So a = 0 and b = p/3.
2. Get the firt part of the sum tan(0)+tan(p/3). For C use tan which is part of the maths
library. You used the maths library in the last practical for Conversion.c. tan is available in
FORTRAN by default.
3. Create a loop that generates 11 equidistant points between 0 ! p/3. Thus N = 12 and
x0 = a = 0 and x12 = b = p/3.
4. Change the loop so that you are adding 2tan(xi) for the each of the 11 points.
5. Add that sum to that of the end points and multiply by b−a
2N .
6. Compare this against log(2) you should not be too far out.

- As math functions are used for this program, please add -lm option while doing gcc compile