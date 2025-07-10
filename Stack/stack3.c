#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    if (top == MAX - 1)
    {
        printf("Stack overflow!\n");
    }
    else
    {
        stack[++top] = ch;
    }
}

char pop()
{
    if (top == -1)
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
    char word[MAX];
    int isPalindrome = 1;

    printf("Enter a word: ");
    scanf("%s", word);

    int len = strlen(word);

    // Push all characters onto stack
    for (int i = 0; i < len; i++)
    {
        push(word[i]);
    }

    // Compare characters from word and stack
    for (int i = 0; i < len; i++)
    {
        char popped = pop();
        if (popped == '\0' || word[i] != popped)
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
    {
        printf("The word is a palindrome.\n");
    }
    else
    {
        printf("The word is NOT a palindrome.\n");
    }

    return 0;
}