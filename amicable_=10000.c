#include<stdio.h>

int main()
{
    printf("|---------- PROGRAM FOR AMICABLE NUMBERS.----------|");
        int num1,num2,sum=0;
            for(num1=9000; num1<=10000; num1++)
                {
                        for(num2=9000; num2<=10000; num2++)
                                    {
                                                    if ((num1==sum_of_divisors(num2)) && (num2==sum_of_divisors(num1)) && num1!=num2)
                                                                    {
                                                                                        printf("\n%d\t\t%d", num1,num2);
                                                                                                        }
                                                                                                                    }
                                                                                                                        }
                                                                                                                            return 0;
                                                                                                                            }
int sum_of_divisors(int n)
{
    int sum=0,i;
        for(i=1; i<n; i++)
            {
                     if(n%i==0)
                              {
                                            sum=sum+i;
                                                     }         
                                                         }   
                                                             return sum;
                                                             }