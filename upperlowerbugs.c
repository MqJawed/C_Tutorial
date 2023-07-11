#include<stdio.h>
char upper(char);
char lower(char);
void main()
{char c='q',d='U';
printf("%c\n",upper('q'));
printf("%c",lower('U'));
}
char upper(char c)
{c='i';
char d='I';
return d;}
char lower(char c)
{c='I';
char d='i';
return d;}