#include<stdio.h>
#include<stdlib.h>

//allocate memory using datatype and size of array
int* allocatearray(int n){
    int* array;
    array = (int*)malloc(n * sizeof(int));
    printf(" Array of size %d allocated\n", n);
    return array;
}

// fill all array positions with 1
void fillwithones(int* array, int n){
    int i;
    for(i = 0; i < n; i++)
        array[i] = 1;
}

// print the contents of the array
void printarray(int *array, int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n", array[i]);
    }
}

// Deallocate the memory that has been allocated to the array after its use
void deallocatearray(int* array){
    free(array);
    printf("Array freed!!\n");
}

int main(){
    int n;
    int* array_main;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    array_main = allocatearray(n);
    fillwithones(array_main, n);
    printarray(array_main, n);
    deallocatearray(array_main);
    array_main = NULL;
    return 0;
}