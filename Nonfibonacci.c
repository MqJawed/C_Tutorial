#include<stdio.h>
void main() {
    int n,a=3,b=5;
    printf("Enter the limits: ");
    scanf("%d",&n);
    for (int i=4; i<=n; i++) {
        if (i!=b)
        printf("%d\n",i);
        else
        {b=a+b;
        a=b-a;}
        }
        }