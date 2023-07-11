#include<stdio.h>
int binary_decimal(int);


void main()
{int binary;
printf("Enter the binary number: ");
scanf("%d",&binary);
int returned=binary_decimal(binary);
printf("Equivalent decimal number is %d",returned);
}
int binary_decimal(int binary)
{int i=0,decimal=0,dig;
while (binary>0)
{int dig=(binary%10);
decimal+=dig*pow(2,i++);//when there is no particular value of n as it's post increment therefore it will execute the expression then increase;
binary=binary/10;
}
return decimal;
}