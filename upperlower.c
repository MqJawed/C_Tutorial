#include<stdio.h>
char upper(char);
char lower (char);
void main()
{char x='d';
char y='D';
printf("%c\n",upper(x));
printf("%c",lower(y));
}
char upper(char c)
{return c-32;}
char lower(char C)
{return C+32;