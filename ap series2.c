#include<stdio.h>
void main()
{   int a,n,cd;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the common difference: ");
    scanf("%d",&cd);
    printf("Enter the nth terms: ");
    scanf("%d",&n);
    for (int i=0; i<=n-1; i++)
    {   int t=a+i*cd;
        printf("%d\n",t);
    }
}