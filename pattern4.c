#include<stdio.h>
void main() 
{    int i,j,n,k=1;
printf("Enter the no of rows: ");
scanf("%d",&n);
for (i=1;i<=n;i++)
    {for (j=1;j<=n;j++) // ja se chhoda wahi se k ko badana hai to isiliye k=1 1st outer loop me nhi likha
       { if (j<=i)//1st make pattern like star then add a logic to make it a pattern of given number
    {printf("%d",k);
    k++;}
        
      
       }
    printf("\n");
    }
}