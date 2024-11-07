#include<stdio.h>
#include<stdlib.h>
//define your function f(x) given in the problem
#define f(x,y) (-x*y*y)

int main(void){
    float x0,y0,xn,yn,h,slope;
    int i,n;
    printf("Enter X0: ");
    scanf("%f", &x0);
    printf("Enter Y0: ");
    scanf("%f", &y0);
    printf("Enter Xn: ");
    scanf("%f", &xn);
    printf("Enter number of steps : ");
    scanf("%d",&n);
    h=(xn-x0)/n;
    printf("X0\t\t\ty0\t\t\tSlope\t\t\tYn\n-----\t\t\t-----\t\t\t-----\t\t\t-----\n");
    for(i=0;i<n;i++){
        slope=f(x0,y0);
        yn=y0+h*slope;
        printf("%f\t\t%f\t\t%f\t\t%f\n",x0,y0,slope,yn);
        y0=yn;
        x0=x0+h;
    }
    printf("\nY=%f at X=%f",yn,xn);
    return 0;
}