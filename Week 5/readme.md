
#input.c

  

- Program to accept input from the user using scanf

- Print out the request of format of input required

- Use descriptors to accept an nteger and a double

- Create a pointer and store the address of integer in it

- Print out the address and value of the integer variable using the pinter

  

#fibonacci.c

  

- Program to display fibonacci series upto n values

	$F_{n}$ = $F_{n-1}$ + $F_{n-2}$

	$F_{0}$ = 0 $F_{1}$ = 1

- Using n as input we loop over n times and generate the fibinacci numbers using a function

- The function takes two numbers as input which point to n-1 and n-2 values to determine what the nth

fibonacci number is.

  

#hyperbolic_tan.c

  

- Program to calculate hyperbolic tan result

  

It can be calculated in many ways. We use two different methods in this code to arrive at the results

  

1. Maclaurin series

  

	<a  href="https://www.codecogs.com/eqnedit.php?latex=\arctan(x)&space;=&space;\sum_{n=0}^{\infty&space;}&space;x^{2n&plus;1}&space;/&space;2n&plus;1"  target="_blank"><img  src="https://latex.codecogs.com/png.latex?\arctan(x)&space;=&space;\sum_{n=0}^{\infty&space;}&space;x^{2n&plus;1}&space;/&space;2n&plus;1"  title="\arctan(x) = \sum_{n=0}^{\infty } x^{2n+1} / 2n+1"  /></a>

  

2. Natural logorithms

  

	<a  href="https://www.codecogs.com/eqnedit.php?latex=\arctan(x)&space;=&space;1/2[\ln&space;(1&plus;x)&space;-&space;\ln(1-x)]&space;,&space;x&space;\in&space;R&space;:&space;\left&space;|&space;x&space;\right&space;|&space;<&space;1"  target="_blank"><img  src="https://latex.codecogs.com/png.latex?\arctan(x)&space;=&space;1/2[\ln&space;(1&plus;x)&space;-&space;\ln(1-x)]&space;,&space;x&space;\in&space;R&space;:&space;\left&space;|&space;x&space;\right&space;|&space;<&space;1"  title="\arctan(x) = 1/2[\ln (1+x) - \ln(1-x)] , x \in R : \left | x \right | < 1"  /></a>

  

- enter the precision we are looking for

- enter the range for which we r determining arctan

- call the arctan function which implements the maclaurin series

- call the arctan function which implements the logarithms approach

- compare the accuracy of both the fuctions