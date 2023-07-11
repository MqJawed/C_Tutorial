#include<stdio.h>
void main() 
{    int i,j,n,prime;
     printf("Enter the limit: ");
     scanf("%d",&n);
     for (i=2;i<=n;i++)
    { prime=1; // important line and its location
       for (j=2;j<i;j++)
          {   if (i%j==0)
             {    prime=0;
                  break;
             }
          }
      if (prime==1)
      printf("%d\n",i);
     }
}
/*we are assigning prime value inside
the outer loop other wise for 4 and so on
the value of prime will be assign 0 and 
for 5 and so on the value of prime will 
not change hence we will get only 2 prime
numbers*/