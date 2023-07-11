#include<stdio.h>
void toh(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        printf("\nMove disk 1 from %c to %c",from , to);
        return;
    }
    toh(n-1,from,aux,to);
    printf("\nMove disk %d from %c to %c",n,from,to);
    toh(n-1,aux,to,from);
}
void main()
{
    //char a,b,c;
    toh(4,'a','c','b');
}