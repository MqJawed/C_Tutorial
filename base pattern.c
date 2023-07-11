#include<stdio.h>
void main() 
{    int i,j,n;
printf("Enter the no of rows: ");
scanf("%d",&n);
for (i=1;i<=n;i++)
    {for (j=1;j<=n;j++)
       { if(j<=i) // Only this line changes for different types rest is the structure of pattern
    printf("*");
        
      
       }
    printf("\n");
    }
}