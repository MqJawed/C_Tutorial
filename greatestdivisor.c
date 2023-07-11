#include<stdio.h>
int gcd(int,int);
void main()
{int a,b;
printf("Enter the first integer value: ");
scanf("%d",&a);
printf("Enter the second integer value: ");
scanf("%d",&b);
printf("The Greatest common divisor is %d",gcd(a,b));
}
int gcd(int a,int b)
{ if (a%b==0)
  return b;
  else 
  return gcd(b,a%b);
}