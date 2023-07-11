#include<stdio.h>
void main()
{int i,j,num1,num2,sum1=0,sum2=0;
for (num1=1;num1<=10000;num1++)
{for (i=0;i<10000;i++)
if (num1%i==0)
sum1+=i;}
for (num2=1;num2<=10000;num2++)
{for (j=0;j<10000;j++)
if (num2%j==0)
sum2+=j;}
if ((sum1==num2)&&(sum2==num1))
printf("%d,%d",num1,num2);
}