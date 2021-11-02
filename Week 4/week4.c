// Please add -lm option while doing a gcc compile

#include<stdio.h>
#include<math.h>

float degtorad(float deg);

int main(){
    int n = 12, i;
    float tan_arr[n + 1], deg, rad, area, mult_radian;
    // Calculate the values of f(xi) where i = 0,1,...12
    //The area is stored in the tan_arr
    //The input xi is in radians
    for(i = 0; i <= n; i++){
        deg = i * 5.0;
        rad = degtorad(deg);
        tan_arr[i] = tan(rad);
        printf("Tan array[%d] = %f\n",i, tan_arr[i]);
    }

    // finding the area using the trapezoidal rule
    // move below statements to a function
    area = tan_arr[0] + tan_arr[n];
    for(i = 1; i< n; i++){
        area += 2.0 * tan_arr[i];
    }

    // Multiple area with ((pi/3))/2n)
    mult_radian = degtorad( (60.0 - 0) / (2 * n));
    area = mult_radian * area;

    printf("Area : %f", area);
    printf("\nActual result : %f", log(2));
    return 0;
}

float degtorad(float deg){
    return ((M_PI)* deg / 180.0);
}