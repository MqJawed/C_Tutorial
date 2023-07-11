#include<stdio.h>
void main()

{int n,i=0, sum=0;
int*a;
a=&a[0];
printf("Enter a number ");
scanf("%d", &n);

int temp=n;
while(n>0){

a[i]=n%10;
sum+=pow(a[i],3);
i++;
n=n/10;
}
if (sum==temp)
printf("The number is amstrong");
else
printf("The number is not amstrong");
}