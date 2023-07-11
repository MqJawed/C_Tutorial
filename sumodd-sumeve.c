#include<stdio.h>
void main()
{int n,sumodd=0,sumeve=0;
printf("Enter the number: ");
scanf("%d",&n);
for (int i=0;i<=n-1;i++)
{sumodd+=(pow((2*i+1),3));}
printf("Sum of odd is %d",sumodd);
for (int j=1;j<=n;j++)
{sumeve+=(pow((2*j),3));}
printf("\nSum of even is %d",sumeve);
printf("\nResult is %d",sumodd-sumeve);
}
