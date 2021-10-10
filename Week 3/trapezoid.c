#include<stdio.h>
#include<math.h>
int main(void){
    int N=12, i;
    float a = 0.0, b = 60.0;
    // Convert b from angle to radians
    float b_rad = (M_PI * b)/180;
    printf("Angle in radians : %f", b_rad);
    // adding f(x1) + f(xn)
    float area = tan(a) + tan(b_rad);
    printf("\nArea : %f", area);

    // 2f(x1)+2f(x2)+.....+2f(xn)
    for(i=5; i<56;i=i+5){
        area = area+2*tan((M_PI * i)/180);
        printf("\nNew Area at %d is %f",i/5, area);
    }

    // Multiply with (b-1)/2N
    // Convert to radians first
    float mult_rad = M_PI *((b - a)/ (2*N)) / 180;
    float total_area = mult_rad * area;
    printf("\nTrapezoidal area : %f", total_area);
    printf("\nActual area : %f", log(2));
    return 0;
}