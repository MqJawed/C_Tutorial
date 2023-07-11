#include<stdio.h>
void main()
{int i,j,num1,num2,sum1=0,sum2=0;
printf("Enter the 1st number: ");
scanf("%d",&num1);
printf("Enter the 2nd number: ");
scanf("%d",&num2);
for (i=1;i<num1;i++)
{
if (num1%i==0)
sum1+=i;}
for (j=1;j<num2;j++)
{
if (num2%j==0)
sum2+=j;}
if ((sum1==num2)&&(sum2==num1)&&(num1!=num2))
printf("The pair is amicable");
else
printf("The pair is not amicable");
}
