#include<stdio.h>
int fact(int);
int per(int,int);
int comb(int,int);
void main()
{int n,r;
printf("Enter the integer value: ");
scanf("%d",&n);
printf("Enter the value of r: ");
scanf("%d",&r);
printf("The factorial is %d\n",fact(n));
printf("The permutation is %d\n",per(n,r));
printf("The combination is %d",comb(n,r));
}
int fact(int n)
{if ((n==1)||(n==0))
return 1;
else 
return n*fact(n-1);
}
int per(int n,int r)
{int p=fact(n)/fact(n-r);
return p;
}
int comb(int n,int r)
{int p=fact(n)/((fact(n-r))*fact(r));
return p;
}