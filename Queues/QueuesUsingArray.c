/* Online C Compiler and Editor */
#include <stdio.h>
#include <stdlib.h>

struct Queues
{
    int size;
    int front;
    int rear;
    int *arr;
};

void create(struct Queues *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));
}

void enqueue(struct Queues *q, int x)
{
    if (q->rear == q->size - 1)
        printf("Queues Overflow\n");
    else
    {
        q->rear++;
        q->arr[q->rear] = x;
    }
}

int dequeue(struct Queues *q)
{
    int x = -1;

    if (q->front == q->rear)
        printf("Queue is Empty\n");
    else
    {
        q->front++;
        x = q->arr[q->front];
    }
    return x;
}

void display(struct Queues *q)
{
    int i;
    for (i = q->front+1 ; i <= q->rear; i++)
        printf("%d\t", q->arr[i]);
    printf("\n");
}


int main()
{
    // int size;
    // printf("Enter the size of queues\n");
    // scanf("%d",&size);
    struct Queues q;

    create(&q, 5);

    enqueue(&q, 10);
    enqueue(&q, 30);
    enqueue(&q, 80);
    enqueue(&q, 70);

    display(&q);
    dequeue(&q);
    printf("After removing an element\n");
    display(&q);
    return 0;
}
