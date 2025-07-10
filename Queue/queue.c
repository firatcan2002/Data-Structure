#include <stdio.h>
#define SIZE 100

int queue[SIZE];
int front = 0;
int rear = -1;

void enqueue(int value)
{
    if (rear == SIZE -1)
    {
        printf("Queue is full! (Overflow)\n");
    }

    else
    {
        rear++;
        queue[rear] = value;
        printf("%d added to the queue.\n",value);
    }
}

int dequeue()
{
    if (front>rear)
    {
        printf("Queue is empty! (Underflow)\n");
    }

    else
    {
        printf("%d removed from the queue.\n",queue[front]);
        front++;
    }
}

int peek()
{
    if (front>rear)
    {
        printf("Queue is empty! \n");
        return -1;
    }

    else
    {
        return queue[front];
    }
}

void display()
 {
    if (front > rear) 
    {
        printf("Queue is empty!\n");
    }
    
    else 
    {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) 
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    printf("Peek: %d\n",peek());

    printf("Dequeue: %d\n",dequeue());
    printf("Dequeue: %d\n",dequeue());

    display();

    enqueue(40);
    enqueue(50);

    display();

    return 0;
}