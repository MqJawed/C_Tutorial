#include<stdio.h>
int mul(int,int);
void main()
{   int a,b;
    printf("Enter the first integer value: ");
    scanf("%d",&a);
    printf("Enter the second integer value: ");
    scanf("%d",&b);
    printf("The multiplication value is %d",mul(a,b));
}
int mul(int a,int b)
{if (b>0)
{
if (b==1)
return a;
else 
return a+mul(a,b-1);   
}
else if (b==0)
return 0;
else
{b=-1*b;
return -(a+mul(a,b-1));
}
}