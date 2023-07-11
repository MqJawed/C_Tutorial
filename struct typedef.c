#include<stdio.h>

typedef struct emolyee
{
int code;
int time;
}emp;

void main()
{
emp e1;
emp *e11;

e11=&e1;
e1.code=123;
e11->time=1213;
printf("%d",e11->time);
}