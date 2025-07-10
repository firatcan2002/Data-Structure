#include <stdio.h>

int main()
{
    int numbers[100],n;
    int evenSum = 0,oddSum = 0;

    printf("How many numbers will you enter? ");
    scanf("%d",&n);

    printf("Enter %d numbers: \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&numbers[i]);

        if (numbers[i] % 2 == 0)
        {
            evenSum += numbers[i];
        }

        else
        {
            oddSum += numbers[i];
        }
        
    }
    
    printf("Sum of even numbers: %d\n",evenSum);
    printf("Sum of odd numbers: %d\n",oddSum);

    return 0;
}