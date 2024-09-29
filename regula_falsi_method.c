// Find the root of the equation x^3-9*x+1

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) (pow(x,3)-9*x+1) //the equation according to the problem.

int main(void){
    float a,b,c,h;
    printf("Enter the range from lower to upper: ");
    scanf("%f%f",&a,&b);
    
    if(f(a)*f(b)>0)                         //none of the f(x) is negative
        exit(0);
    else{                                   //any of the f(x) is negative
        do{
            c=a-(f(a)*(b-a)/(f(b)-f(a)));
            if(f(c)>0)
                a=c;
            else 
                b=c;
            h=a-(f(a)*(b-a)/(f(b)-f(a)));
            printf("Reaching x %f\n",h);
        }while(fabs(h-c)>0.0001);
    }
    printf("The final value of x is %.3f",h);
}