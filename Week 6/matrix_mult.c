#include<stdio.h>
int main(){
    int n=5, p=3, q=4;
    double a[n][p], b[p][q], c[n][q];
    int i, j, k;

    // Initializing matrix a
    for(i=0; i<n; i++)
        for(j=0;j<p;j++)
            a[i][j] = i + j;

    // Initializing matrix b
    for(i=0; i<p; i++)
        for(j=0;j<q;j++)
            b[i][j] = i - j;

    // Initializing matrix c
    for(i=0; i<n; i++)
        for(j=0;j<q;j++)
            c[i][j] = 0.0;

    // Logic for matrix multiplication
    for(i=0;i<n;i++)
        for(j=0;j<q;j++)
            for(k=0;k<p;k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];

    // Output of matrix A
    printf("\n Matrix A : \n");
    for(i=0; i<n; i++){
        for(j=0;j<p;j++){
            printf("%.3lf ", a[i][j]);
        }
        printf("\n");
    }
    // Output of matrix B
    printf("\n Matrix B : \n");
    for(i=0; i<p; i++){
        for(j=0;j<q;j++){
            printf("%.3lf ", b[i][j]);
        }
        printf("\n");
    }
    // Output of matrix C
    printf("\n Matrix C : \n");
    for(i=0; i<n; i++){
        for(j=0;j<q;j++){
            printf("%.3lf ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}