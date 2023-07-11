#include<stdio.h>
void main() 
{    int i,j,n,prime;
     printf("Enter the limit: ");
     scanf("%d",&n);
     for (i=1;i<=n;i++)
     {  for (j=2;j<=i-1;j++)
        { if (i%j==0)
          break;
         
        else
        prime=0;          
         }
     if (prime==0)
     printf("%d",i);
    }
}