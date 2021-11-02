#include<stdio.h>
#include<math.h>

double arctanh1(const double x, const double delta);
double arctanh2(const double x);

int main() {
    double precision;
    printf("Enter the precision for the Maclaurin series : \n");
    scanf("%lf" , &precision);

    double start, end;
    printf("Enter the start and the finish points for x : \n");
    scanf("%lf, %lf", &start, &end);

    double a = ((fabs(start) + fabs(end))/precision) + 1;
    int asize = a;

    double tan1[asize];
    double tan2[asize];

    double i;
    int j= 0;

    for(i = start; i <= end; i += precision){
        tan1[j] = arctanh1(i, precision);
        tan2[j] = arctanh2(i);
        printf("The difference between tan1[%.3lf] and tan2[%.3lf] is %.10lf\n",i ,i , fabs(tan1[j] - tan2[j]));
        j++;
        printf("%lf, %lf\n",i, end);
    }
    return 0;
}

double arctanh1(const double x, const double delta){
    double arctan = 0;
    double elem;
    int n = 0;
    do{
        
        double val = 2 * n + 1;
        elem = pow(x, val) / val;
        arctan += elem;
        n++;

    } while(fabs(elem) >= delta);
    return arctan;
}


double arctanh2(const double x) {
    return (log(1 + x) - log(1 - x))/2;
}