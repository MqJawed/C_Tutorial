#include<stdio.h>
#include<stdlib.h>

struct Queue
{
int size;
int front;
int rear;
int *arr;
};

int isempty(struct Queue * q)
{
if (q->front==q->rear)
return 1;
else
return 0;
}

int isfull(struct Queue * q)
{
if (q->rear==q->size-1)
return 1;
else
return 0;
}

void insert(struct Queue *q, int val)
{
if (isfull(q))
printf("Can't insert,Queue overflow!\n");
else
{q->rear++;
q->arr[q->rear]=val;
printf("%d value is inserted successfully!\n",val);
}
}

void delete(struct Queue *q)
{int val;
if (isempty(q))
printf("Can't delete, Queue underflow!\n");
else
{q->front++;
val=q->arr[q->front];
printf("Deleted value is %d\n",val);
}
}

void display(struct Queue*q)
{
if (isempty(q))
printf("Can't display, Queue empty!\n");
else
{
q->front++;
for (int i=q->front;i<=q->size-1;i++)
printf("\nThe displayed element is %d",q->arr[i]);
printf("\n");
}
}

void main()
{int s,c,val;
printf("Enter the size of the Queue: ");
scanf("%d",&s);
struct Queue *q;
q->size=s;
q->front=-1;
q->rear=-1;
q->arr=(int*)malloc(q->size*sizeof(int));
while (c!=4)
{
printf("\nTo insert an element in the queue press 1\nTo delete an element from the queue press 2\nTo display the queue press 3\nTo exit press 4\nEnter your choice: ");
scanf("%d",&c);
switch (c)
{
case 1:
    {
    if (!isfull(q))
        {
        printf("Enter the value to insert: ");
        scanf("%d",&val);
        insert(q,val);
        }
    else
    printf("Queue is full\n");
    break;
    }
case 2:
    {
    delete(q);
    break;
    }
case 3:
    {
    display(q);
    break;
    }
case 4:
    {
    break;    
    }
default: 
    {
    printf("Enter a correct choice!\n");
    break;
    }
}
}
}