//newton's forward difference interpolation method
#include<stdio.h>
#include<stdlib.h>

int main(void){
    float x[100],y[100][100],a,u,h,p,q,sum;
    int n,i,j;
    printf("Enter no. of arguments: ");
    scanf("%d",&n);
    printf("Enter X : ");
    for(i=0;i<n;i++)
        scanf("%f",&x[i]);
    printf("Enter Y : ");
    for(i=0;i<n;i++)
        scanf("%f",&y[i][0]);
    for (j = 1; j < n; j++) {
        for (i = 0; i < n - j; i++) {
            y[i][j] = y[i + 1][j - 1] - y[i][j - 1];
        }
    }

    
    printf("\n***Forward Difference table***\nX\t\tY\t---higher order of forward difference--->\n");
    //forward difference table
    for (i = 0; i < n; i++) {
        printf("%f", x[i]);
        for (j = 0; j < n - i; j++) {
            printf("\t%f", y[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter interpolation point: ");
    scanf("%f",&a);
    h=x[2]-x[1];
    u=(a-x[0])/h;
    sum=y[0][0];
    p=1;q=1;
    for(j=1;j<n;j++){
        p*=j;
        q*=(u+1-j);
        sum+=q*y[0][j]/p;
    }
    printf("Y=%f at X=%f",sum,a);
    return 0;
}