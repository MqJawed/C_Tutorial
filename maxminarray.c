#include<stdio.h>
void main()
{int a[100],i,n,max,min;
printf("Enter the total number(Less than or equal to 100): ");
scanf("%d",&n);
max=0;
for (i=0;i<n;i++)
{    scanf("%d",&a[i]);
    if (a[i]>max)
    max=a[i];
}
min=max;
for (i=0;i<n;i++)
{if (a[i]<min)
min=a[i];
}
printf("Maximum is %d",max);
printf("\nMinimum is %d",min);
}