#include<stdio.h>
float power(int,int);
void main()
{   int a,b;
    printf("Enter the integer value: ");
    scanf("%d",&a);
    printf("Enter the power value: ");
    scanf("%d",&b);
    printf("The value is %.3f",power(a,b));
}
float power(int a,int b)
{
    if (b>0)
    {   if (b==1)
            return a;

        else
            return a*power(a,(b-1));
    }
    else if (b<0)
    {    b=-1*b;
    return 1/(a*power(a,b-1));
    }
    else
    return 1;
}