#include<stdio.h>
#include<stdlib.h>

/*
Rod 1 = A
Rod 2 = B
Rod 3 = C

number of disks = 2

Move disk 1 from A to B
Move disk 2 from A to C
Move Disk 1 from B to C

Shift 'n-1' disks from A to B
Shift one disk from A to C(destination)
Shift 'n-1' disks from B to C(destination)
*/

void hanoi(int n, int source, int dest, int mid){
    if(n==1)
        printf("Moved disk %d from %d to %d\n", n, source, dest);
    else{
        hanoi(n-1,source,mid,dest);
        printf("Moved disk %d from %d to %d\n", n, source,dest);
        hanoi(n-1,mid,dest,source);
    }
}

void main(){
    int h;
    printf("Enter number of disks :\n");
    scanf("%d", &h);
    printf("Tower of Hanoi solution for %d disks is : \n", h);
    hanoi(h,1,3,2);
}