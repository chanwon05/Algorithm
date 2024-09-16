#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 10000
int size = 0;

typedef struct
{
    int data[SIZE];
    int rear, front;
}QueueType;

void init(QueueType* Q)
{
    Q->rear = Q->front = 0;
}

int empty(QueueType* Q)
{
    if (Q->front == Q->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(QueueType* Q, int e)
{
    Q->data[Q->rear++] = e;
    size++;       
}

int pop(QueueType* Q)
{
    if (empty(Q))
    {
        return -1;
    }
    else
    {
        size--;
        return Q->data[Q->front++];
    }
}

int front(QueueType* Q)
{
    if (empty(Q))
    {
        return -1;
    }
    else
    {
        return Q->data[Q->front];
    }
}

int back(QueueType* Q)
{
    if (empty(Q))
    {
        return -1;
    }
    else
    {;
        return Q->data[Q->rear-1];
    }
}




int main()
{
    QueueType Q;
    init(&Q);
    int n;
    int input = 0;
    scanf("%d", &n);
    char* str = (char*)malloc((n + 1) * sizeof(char));

    for (int i = 0; i < n; i++)
    {
        scanf("%s", str);
        if (strcmp(str, "push") == 0)
        {
            scanf("%d", &input);
            push(&Q, input);
        }
        else if (strcmp(str, "pop") == 0)
        {
            printf("%d\n", pop(&Q));
        }
        else if (strcmp(str, "size") == 0)
        {
            printf("%d\n", size);
        }
        else if (strcmp(str, "empty") == 0)
        {
            printf("%d\n", empty(&Q));
        }
        else if (strcmp(str, "front") == 0)
        {
            printf("%d\n", front(&Q));
        }
        else if (strcmp(str, "back") == 0)
        {
            printf("%d\n", back(&Q));
        }




    }



    
   


    return 0;
}