#include <stdio.h>

int main()
{
    int numbers[100],n;

    printf("How many elements will you enter? ");
    scanf("%d",&n);

    printf("Enter %d numbers: \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&numbers[i]);
    }
    
    printf("Reversed array: \n");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ",numbers[i]);
    }
    
    return 0;
}