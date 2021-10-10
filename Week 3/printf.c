#include<stdio.h>
int main(void){
    // declare and initialize integer variables
    int a1 = 2, a2 = 900;
    // declare and initialize float variables
    // print the first variable upto 4 decimal points
    // print the second variable upto 2 decimal points
    float a3 = 3.141567, a4 = 5678.965;
    // declare and initialize char variable
    char a5 = 'a';
    // declare and initialize string
    char a6[20] = "Hello World";
    // using %d for integer and %f  for float formatting
    printf("The integer numbers are : %d  %d \nThe float numbers are : %.4f %.2f", a1, a2, a3, a4 );
    // using %c for character formatting
    printf("\nCharacter variable : %c\n", a5);
    // using %s for string formatting
    printf("String : %s", a6);
    return 0;
}