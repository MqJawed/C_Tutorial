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

void enqueue(struct Queue *q, int val)
{
if (isfull(q))
printf("Can't insert,Queue overflow!\n");
else
{q->rear++;
q->arr[q->rear]=val;
printf("%d value is enqueued successfully!\n",val);
}
}

void dequeue(struct Queue *q)
{int val;
if (isempty(q))
printf("\nCan't delete, Queue underflow!");
else
{q->front++;
val=q->arr[q->front];
printf("\nDequeued value is %d",val);
}
}

void main()
{
struct Queue *q;
q->size=6;
q->front=-1;
q->rear=-1;
q->arr=(int*)malloc(q->size*(sizeof(int)));
enqueue(q,5);
enqueue(q,6);
enqueue(q,7);
enqueue(q,8);
enqueue(q,9);
enqueue(q,10);
enqueue(q,11);
enqueue(q,12);
dequeue(q);
dequeue(q);
dequeue(q);
dequeue(q);
dequeue(q);
dequeue(q);
dequeue(q);
dequeue(q);
}