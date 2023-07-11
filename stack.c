#include<stdio.h>
#include<stdlib.h>

struct stack
{
int size;
int top;
int *arr;
};

int isfull(struct stack *ptr)
{
if (ptr->top==ptr->size-1)
return 1;
else
return 0;
}

int isempty (struct stack *ptr)
{
if (ptr->top==-1)
return 1;
else 
return 0;
}

void push (struct stack *ptr, int val)
{
if (isfull(ptr))
printf("Can't push element stack is full");
else
{ptr->top++;
ptr->arr[ptr->top]=val;
}
}

void pop(struct stack* ptr)
{
if (isempty(ptr))
{printf("Can't pop element stack is empty\n");
}
else
printf("%d",ptr->arr[ptr->top--]);
}

void main()
{
struct stack *s;
s->size=50;
s->top=-1;
s->arr=(int*)malloc(sizeof(int));
push(s,-1);
pop(s);
}