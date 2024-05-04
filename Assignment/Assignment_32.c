#include <stdio.h>

// Program 1

void swapElements(int a[], int x, int y)
{
    int temp;
    temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

// Program 2

void sort(int a[], int size)
{
    int i, round, temp;
    for (round = 1; round < size; round++)
    {
        for (i = 0; i < size - round; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}

int duplicate(int a[], int size)
{
    sort(a, size);
    int i, dup, j;
    for (i = 0; i < size;)
    {
        if (a[i] == a[i + 1])
        {
            dup++;
            for (j = i; i < size && a[j] == a[i]; i++)
                ;
        }
        else
            i++;
    }
    return dup;
}

// Program 3

void printUnique(int a[], int size)
{
    sort(a, size);
    int i, j;
    for (i = 0; i < size;)
    {
        if (a[i] == a[i + 1])
        {
            printf("%d ", a[i]);
            for (j = i; i < size && a[j] == a[i]; i++)
                ;
        }
        else
        {
            printf("%d ", a[i]);
            i++;
        }
    }
}

// This will print only 1(single) occurence element
/* void printUnique(int a[], int size)
{
    int i, round;
    for (round = 0; round < size; round++)
    {
        int count = 0;
        for (i = 0; i < size; i++)
        {
            if (a[round] == a[i])
            {
                count = count + 1;
            }
        }
        if(count==1)
            printf("%d ", a[round]);
    }
} */

// Program 4
void merge(int a[], int b[], int size, int merg[])
{
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < size && j < size; k++)
    {
        if (a[i] > b[j])
        {
            merg[k] = a[i];
            i++;
        }
        else
        {
            merg[k] = b[j];
            j++;
        }
    }
    while (i < size)
    {
        merg[k] = a[i];
        i++;
        k++;
    }
    while (j < size)
    {
        merg[k] = b[j];
        j++;
        k++;
    }
    for (k = 0; k < 10; k++)
    {
        printf("%d ", merg[k]);
    }
}



// Program 5
void frequency(int a[], int size)
{
    sort(a, size);
    int i, dup, j;
    for (i = 0; i < size;)
    {
        int count = 0;
        if (a[i] == a[i + 1])
        {
            for (j = i; i < size && a[j] == a[i]; i++)
            {
                count = count + 1;
            }
            printf("%d   -   %d\n", a[j], count);
        }
        else
        {
            count = count + 1;
            printf("%d   -   %d\n", a[i], count);
            i++;
        }
    }
}

/* int main()
{
    int size, i;
    printf("Enter the size of array:");
    scanf("%d", &size);
    int a[size];
    printf("\nEnter the element of array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printUnique(a, size);
    return 0;
} */

int main()
{
   int a[]={20,18,13,8,2};
   int b[]={15,9,6,3,1};
   int c[10];
   merge(a,b,5,c);
    return 0;
}