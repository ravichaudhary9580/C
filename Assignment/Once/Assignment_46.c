#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Program 1
// Define a function to input variable length string and store it in an array without memory wastage.
char *inputString()
{
    int size;
    char *ptr;

    printf("Enter the size of string: ");
    scanf("%d", &size);
    if (size <= 1)
    {
        printf("Invalid size\n");
        return NULL;
    }

    ptr = (char *)malloc(++size);

    // Clear input buffer
    while (getchar() != '\n')
        ;

    printf("Enter the string: ");
    fgets(ptr, size, stdin);

    // Remove trailing newline if present
    *(ptr + size) = '\0';

    return ptr;
}

// Program 2
// Write a program to ask the user to input a number of data values he would like to enter then create an array dynamically to accommodate the data values. Now take the input from the user and display the average of data values.
void dataInput()
{
    int size;
    float sum;
    int *ptr;
    printf("Enter the number of data to be input: ");
    scanf("%d", &size);

    ptr = (int *)calloc(size, 4);
    printf("Enter the data values:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
        sum = sum + ptr[i];
    }
    printf("Average of the data is: %f", (sum / size));
    free(ptr);
}

// Program 3
//  Write a program to calculate the sum of n numbers entered by the user using malloc and free.
int sumN()
{
    int n, sum = 0;
    int *ptr;
    printf("Enter the No. of numbers to be sum:");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));

    printf("Enter the numbers: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
        sum = sum + ptr[i];
    }
    free(ptr);
    return sum;
}

// Program 4 
// Write a function to merge two array elements and store it in dynamically created array. Return address of this dynamically created array. 
int *mergeArray(int *arr1, int size1, int *arr2, int size2)
{
    int *ptr, size;
    size = size1 + size2;
    ptr = (int *)malloc(size * sizeof(int));
    
    for (int i = 0; i < size1; i++)
    {
        ptr[i] = *(arr1 + i);
    }

    for (int i = 0; i < size2; i++)
    {
        ptr[size1 + i] = *(arr2 + i);
    }
    return ptr;
}
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    int *ptr;

    ptr = mergeArray(arr1,5,arr2,5);

    for (int i = 0; i < 10; i++)
    {
        printf(" %d ", ptr[i]);
    }
    return 0;
}