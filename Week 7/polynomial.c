#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// Calculate factorial such that n! = n* n-1 * ....* 1
int factorial(int n){
    int i, fact = 1;

    if(n==0)
        return 1;
    
    return n* factorial(n-1);
}

// use the polynomial equation to evaluate the value of e 
// sum of 1+ x + (x^2/2!) + (x^3/3!)+....
// n defines the degree of the polynomial to which we have to evaluate the above expression
double polynomail(int n, int x){
    double sum = 0.0;
    int i;

    for(i=0; i <= n; i++){
        sum += (double)pow(x,i)/factorial(i);
    }
    return sum;
}

void main(){
    int order_polynomail, array_size;
    double* poly_array;
    int i, x=1;
    printf("Enter the order of the polynomail : ");
    scanf("%d", &order_polynomail);

    array_size = order_polynomail+1;

    // dynamic memory allocation based on user input
    poly_array = (double *)malloc(array_size * sizeof(double));

    // call polynomial function for each degree
    for(i=0; i< array_size; i++){
        poly_array[i] = polynomail(i,x);
        printf("f[%d] = %.20f\n", i , poly_array[i]);
    }

    // Display true value of e
    printf("e1 = %0.20f\n", exp(1));

    // Find the difference between true value and each degree of polunomial expression
    for(i=0; i< array_size; i++){
        printf("Estimate difference for term %d is %.20f \n", i, exp(1) - poly_array[i]);
    }

    // deallocate memory space
    free(poly_array);
    poly_array = NULL;
    return;
}