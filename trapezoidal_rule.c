#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define f(x) (1/(1+pow(x,2))) //replace the function with your function
int main(void){
    float a,b,h,x[100],y[100],temp=0,sum=0,f;
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

    //sum of all the elements except the first and last element of y(y0 and yn)
    for(i=1;i<=n-1;i++)
        temp+=y[i];

    //implementing the main formula
    sum=h/2*(y[0]+y[n]+2*temp);

    printf("Integral answer is : %f",sum);
    return 0;
}
