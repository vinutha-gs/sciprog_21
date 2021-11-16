#include<stdio.h>
#include<stdlib.h>
#include "magic_square.h"

int main(){
    int n, i;
    int j;
    printf("Enter the square side:\n");
    scanf("%d", &n);
    int **magicsquare = malloc(n * sizeof(int));
    // Matrix allocation
    for(i=0; i<n ; i++){
        magicsquare[i] = malloc(n * sizeof(int));
    }

    // Take matrix input from user
    for(i=0; i<n; i++){
        printf("Enter the elements of row %d separated by blank on new line : \n", i+1);
        for(j=0; j<n; j++){
            scanf("%d", &magicsquare[i][j]);
        }
    }

    printf("The square %s magic\n", isMagicSquare(magicsquare,n)? "is": "is NOT");

    // Deallocate memory space of matrix
    for(i=0;i<n;i++)
        free(magicsquare[i]);
    free(magicsquare);
    return 0;
}