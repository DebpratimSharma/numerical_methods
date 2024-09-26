//simpon's 1/3rd rule to find definite integral of function 1/(1+x^2)
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define f(x) (1/(1+pow(x,2))) //replace the function with your function
int main(void){
    float a,b,h,x[100],y[100],sum=0,sum_e=0,sum_o=0,f;
    int i,n;
    printf("Enter the upper limit: ");
    scanf("%f",&b);
    printf("Enter the lower limit: ");
    scanf("%f",&a);
    printf("Enter the number of intervals: ");
    scanf("%d",&n);

    //defining h
    h=(b-a)/n;

    //calculating the values of y(y0,y1,y2,...)
    for(i=0;i<=n;i++)
    {
        x[i]=a+i*h;

        y[i]=f(x[i]);

    }

    //sum of the even y's and odd y's
    for(i=1;i<=n-1;i++)
    {
        if(i%2!=0)
            sum_o+=y[i];
        else
            sum_e+=y[i];
    }

    //implementing the main formula
    sum=h/3*(y[0]+y[n]+4*sum_o+2*sum_e);

    printf("Integral answer is : %f",sum);
    return 0;
}