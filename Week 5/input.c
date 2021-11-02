#include<stdio.h>
// Take an integer and double as input from user 
int main(void){
    int a;
    double b;
    printf("Enter an integer and a double value separated by \',\'");
    scanf("%d, %lf", &a, &b);
    printf("Integer number entered is : %d", a);
    printf("\nDouble value entered is : %lf", b);
    // Store the integer in a pointer
    // print out the address and value using the pointer
    int *p = &a;
    printf("\nThe address of variable a is : %d", &a);
    printf("\nThe value of a is : %d", *p);
    return 0;
}