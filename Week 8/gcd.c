/*
Iterative and Recursive functions of Euclid's Algorithm
to calculate the GCD of two numbers a and b
*/
#include<stdio.h>

// function declarations
int iterative_gcd(int a, int b);
int recursive_gcd(int a, int b);

int main(void){
    int a,b, error;
    printf("Please input two positive integers\n");
    error = scanf("%d %d", &a, &b);
    if(error != 2){
        printf("Please try again");
        return 1;
    }
    if(a<=0|| b<=0){
        printf("These numbers are not positive\n");
        return 1;
    }

    printf("Iterative gcd(%d , %d) = %d\n",a,b, iterative_gcd(a,b));
    printf("Recursive gcd(%d , %d) = %d\n",a,b, recursive_gcd(a,b));
    return 0;
}

int iterative_gcd(int a, int b){
    int temp;
    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int recursive_gcd(int a, int b){
    if(b == 0){
        return a;
    }
    else
        return(recursive_gcd(b, a%b));
}