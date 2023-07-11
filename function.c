#include<stdio.h>
int gcd(int,int);


void main()
{ int n1,n2;
  printf("Enter the numbers ");
  scanf("%d %d",&n1,&n2);
  gcd(n1,n2);
}


int gcd(int a,int b){
int c=a%b;
if (c==0)
printf("%d",b);
else
return gcd(b,c);
}