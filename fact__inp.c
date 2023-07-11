#include<stdio.h>
void main()
{int n,factorial=1;
printf("Enter the number: ");
scanf("%d",&n);
int i=1;
while(i<=n)
{factorial=factorial*i;
i++;}
printf("The factorial of the number is %d",factorial);
}