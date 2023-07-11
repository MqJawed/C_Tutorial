#include<stdio.h>
void octal_decimal(int);


void main()
{int octal;
printf("Enter the octal number: ");
scanf("%d",&octal);
octal_decimal(octal);
}
void octal_decimal(int octal)
{int i=0,decimal=0,dig;
while (octal>0)
{int dig=(octal%10);
decimal+=dig*pow(8,i++);//when there is no particular value of n;
octal=octal/10;
}
printf("Equivalent decimal is %d",decimal);
}