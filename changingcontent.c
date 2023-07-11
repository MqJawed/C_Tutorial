#include<stdio.h>
void main()
{
int i,n;
printf("Enter the size of array: ");
scanf("%d",&n);
int a[n];// if we take pointer then line 7 will be null and line 4 will be int*a,n; rest all are same
for (i=0;i<n;i++)
{ printf("Enter the element %d: ",i+1);
scanf("%d",&a[i]);
}
printf("The array before changing the particular pos of array  is: \n");
for (i=0;i<n;i++)
{printf("The element %d is %d\n",i+1,a[i]);
}
a[0]=a[0]+a[1];
a[1]=a[0]-a[1];
a[0]=a[0]-a[1];

printf("The array after changing the 1st and 2nd pos of array  is: \n");
for (i=0;i<n;i++)
{printf("The element %d is %d\n",i+1,a[i]);
}
}
