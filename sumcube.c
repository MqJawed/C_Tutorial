#include<stdio.h>
void main()
{int n,sum=0;
printf("Enter the number: ");
scanf("%d",&n);
for (int i=1;i<=n;i++)
{sum+=(pow(i,3));}
printf("Sum is %d",sum);
}
