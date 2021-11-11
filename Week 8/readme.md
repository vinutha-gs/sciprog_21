# Recursive GCD function

Program to evaliate the greatest common divisors of the two integer inputs given by the user.
We use the following Eucledian algorithm to determine GCD.

GCD(a, b)
while b!=0 do
    temp=b
    b=a mod b
    a=temp
end while
return a

<img src="https://latex.codecogs.com/svg.image?gcd(a,b)&space;=&space;\begin{cases}&space;&&space;\text{a&space;}&space;{&space;if&space;}&space;\text{&space;b}&space;=&space;&space;0\\&space;&&space;\text{gcd(b,a&space;mod&space;b)&space;}&space;{&space;if&space;}&space;\text{&space;b}\neq0\end{cases}" title="gcd(a,b) = \begin{cases} & \text{a } { if } \text{ b} = 0\\ & \text{gcd(b,a mod b) } { if } \text{ b}\neq0\end{cases}" />

- Use an iterative approach first to determine GCD using iterative_gcd() function
- Create another function recursive_gcd() which used the eucledian algorithm to arrive at the GCD.