#include<stdio.h>
void main() {
    float i;
    int n;
    float sum=0;
    printf("Enter the limits: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {  sum+=(2*i)/((2*i-1)*(2*i+1));
    }    
    printf("%f",sum);
    }