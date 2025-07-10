#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c)
{
    if(top == MAX-1)
    {
        printf("Stack overflow!\n");
    }

    else
    {
        stack[++top] = c;
    }
}

char pop()
{
    if(top == -1)
    {
        printf("Stack underflow!\n");
        return '\0';
    }

    else
    {
        return stack[top--];
    }
}

int main()
{
    char word[100];

    printf("Enter a word: ");
    scanf("%s",word);

    for (int i = 0; i < strlen(word); i++)
    {
        push(word[i]);
    }

    printf("Reversed word: ");
    while (top != -1)
    {
        printf("%c",pop());
    }
    
    printf("\n");
    return 0;
}