#include<stdio.h>
float sumdec(int);

void main()
{int n;
printf("Enter the limit: ");
scanf("%d",&n);
printf("The sum of the given limit is %f",sumdec(n));
}

float sumdec(int n)
{if (n==1)
return (float)2/3;
else
{float p=(float)(2*n)/((2*n-1)*(2*n+1));
return p+sumdec(n-1);
}
}