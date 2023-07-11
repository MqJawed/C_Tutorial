#include<stdio.h>
void main()
{   int a,prime;
    printf("Enter the value of integer: ");
    scanf("%d",&a);
    if (a>1)
    {    for (int i=2;i<=a-1;i++)
         {       if (a%i==0)
                 {    prime=0;
                      break;
                 }
         }
            if (prime==0)
                printf("The given number is composite");
            else
                printf("The given nummber is prime");    
     }       
}    