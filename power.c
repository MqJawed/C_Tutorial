#include<stdio.h>
float power(int,int);
void main()
{int a,b;
printf("Enter the number: ");
scanf("%d",&a);
printf("Enter the power: ");
scanf("%d",&b);
printf("The value is %f",power(a,b));
}
float power(int a, int b)
{float x=1;
if (b>=0)
{for (int i=1;i<=b;i++)
{

x*=a;
}
return x;
}
else 
{(b=(-1)*b);
//printf("%d\n",b);
for (int i=1;i<=b;i++)
{

x=x/a;
}
return x;
}
}