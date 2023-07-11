#include<stdio.h>
void main()
{
int n;
printf("Enter the size of array: ");
scanf("%d",&n);
int a[n];// if we take pointer then line 7 will be null and line 4 will be int*a,n; rest all are same
for (int i=0;i<n;i++)
{ printf("Enter the element %d: ",i+1);
scanf("%d",&a[i]);
}
for (int i=0;i<n;i++)
{printf("The element %d is %d\n",i+1,a[i]);
}
}