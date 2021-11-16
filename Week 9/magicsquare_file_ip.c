#include<stdio.h>
#include<stdlib.h>
#include "magic_square.h"
// setting max length of filename to be 100
#define MAX_FILE_NAME 100

// function to get number of lines present in a file
// In our code this will represent the size of the square matrix
int getlines(char filename[MAX_FILE_NAME]){
    FILE *fp;
    int ch_read, count = 0;
    fp = fopen(filename, "r");

    // read characters from the file till we encounter end of file
    while((ch_read = fgetc(fp)) != EOF){
        // increment count at every line break
        if(ch_read == '\n'){
            count += 1;
        }
    }
    printf("No of lines in the file : %d\n", count);
    fclose(fp);
    return count;
}

int main(){
    int j, i, n;
    FILE *f;
    char filename[MAX_FILE_NAME];
    printf("Enter the file name to be read:\n");
    scanf("%s", filename);

    // get size of matrix by reading in the number of lines of the file
    n = getlines(filename);
    f = fopen(filename, "r");
    int **magicsquare = malloc(n * sizeof(int*));
    // Matrix dynamic allocation
    for(i=0; i<n ; i++){
        magicsquare[i] = malloc(n * sizeof(int));
    }

    // Take matrix input from the file
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            fscanf(f,"%d", &magicsquare[i][j]);
        }
    }

    printf("The square %s magic\n", isMagicSquare(magicsquare,n)? "is": "is NOT");

    // Deallocate memory space of matrix

    for(i=0;i<n;i++)
        free(magicsquare[i]);
    free(magicsquare);
    fclose(f);
    return 0;
}