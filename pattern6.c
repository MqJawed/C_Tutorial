#include<stdio.h>
void main() 
{    int i,j,n;
printf("Enter the no of rows: ");
scanf("%d",&n);
for (i=1;i<=n;i++)
    {
    for (j=1;j<=n;j++)
       { if (j<i)
    printf("%d",j);
        if (j==i)
        printf("1");
       }
    printf("\n");
    }
}