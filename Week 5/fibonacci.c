#include<stdio.h>
#include<stdlib.h>

void fibonacci(int *x, int *y);

int main() {
    int n, i;
    int x = 0, y = 1;
    // Accept input from user as to how many numbers to print
    // in the fibonacci series
    printf("Enter a positive integer : ");
    scanf("%d", &n);
    // only positive number should be accepted to generate fibonacci series
    if(n < 1) {
        printf("\nNumber is less than 1\n");
        exit(1);
    }

    printf("The fibonacci sequence is : \n");
    printf("%d\n", x);
    // Loop through upto n to generate the fibonacci numbers
    for(i = 1; i < n; i++){
        fibonacci(&x, &y);
        printf("%d\n",x);
    }
    
    return 0;
}

//function takes two digits as input which represents n-1 and n-2 value
//the nth integer is sum of n-1 and n-2 term
void fibonacci(int *x, int *y) {
    int next;
    next = *x + *y;
    *x = *y;
    *y = next;
}