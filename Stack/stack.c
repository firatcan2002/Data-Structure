#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX-1)
    {
        printf("Stack is full! Cannot  push %d. \n",value);
    }
    
    else
    {
        top++;
        stack[top] = value;
        printf("%d pushed to stack. \n",value);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is empty! Cannot pop. \n");
    }

    else
    {
        printf("%d popped from stack. \n",stack[top]);
        top--;
    }
}
void peek()
{
    if(top== -1)
    {
        printf("Stack is empty! \n");
    }

    else
    {
        printf("Top element: %d \n",stack[top]);
    }
}

void display()
{
    if(top == -1)
    {
        printf("Stack is empty! \n");
    }

    else
    {
        printf("Stack elements (top to bottom): ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ",stack[i]);
        }
        
        printf("\n");
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    peek();
    display();

    pop();
    display();

    return 0;
}