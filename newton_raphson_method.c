//find the root of the equation x^4-x-10 with regula falsi method
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define f(x) (pow(x,4)-x-10)        //definign the function
#define df(x) (4*pow(x,3)-1)        //defining the derivative of the function

int main(void){
    float b,accu,a,x;
    printf("Enter the desired accuracy: ");
    scanf("%f", &accu);
    printf("Enter the initial value: ");
    scanf("%f", &a);
    printf("Displaying the values of x: \n");
    do{
        b=a;
        x=a-f(a)/df(a);
        printf("%f\n",x);
        a=x;
    }while(fabs(b-a)>accu);
    printf("The root of the equation is %f",x);
}