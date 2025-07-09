#include<stdio.h>

int main()
{
    int array[100];
    int size;

    printf("Enter the number of elements: ");
    scanf("%d",&size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&array[i]);
    }

    int min = array[0];
    int max = array[0];
    
    for (int i = 0; i < size; i++)
    {
        if(array[i]<min)
        {
            min = array[i];
        }

        if (array[i]>max)
        {
            max = array[i];
        }
        
    }
    
    printf("\nSmallest element: %d\n",min);
    printf("Largest element: %d\n",max);

    return 0;
}