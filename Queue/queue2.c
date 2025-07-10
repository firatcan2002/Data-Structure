#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value) 
{
    if ((rear + 1) % SIZE == front) 
    {
        printf("Queue is full (Overflow)\n");
    } 

    else 
    {
        if (front == -1)
            front = 0;

        rear = (rear + 1) % SIZE;
        queue[rear] = value;
        printf("Enqueued: %d\n", value);
    }
}

int dequeue()
{
    if (front == -1) 
    {
        printf("Queue is empty (Underflow)\n");
        return -1;
    }

    int deleted = queue[front];
    if (front == rear) 
    {
        front = rear = -1;
    } 

    else 
    {
        front = (front + 1) % SIZE;
    }

    printf("Dequeued: %d\n", deleted);
    return deleted;
}

void display()
 {
    if (front == -1) 
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");
    int i = front;
    while (1) 
    {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main() 
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    dequeue();
    dequeue();

    enqueue(60);
    enqueue(70);

    display();

    return 0;
}