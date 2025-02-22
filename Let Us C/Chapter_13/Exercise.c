#include <stdio.h>
#include <math.h>

// Program 1
// Twenty-five numbers are enterd from the keyboard into an array. Write a program to find out how many of them are positive, how many of them are negative and how many are even and how many odd.
int min()
{
    int arr[25], i;
    int posi = 0, nege = 0, even = 0, odd = 0, zero = 0;
    printf("Enter 25 number:");
    for (i = 0; i < 25; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 25; i++)
    {
        if (arr[i] > 0)
        {
            posi = posi + 1;
            if (arr[i] % 2 == 0)
                even = even + 1;
            else
                odd = odd + 1;
        }
        else if (arr[i] < 0)
        {
            nege = nege + 1;
        }
        else
            zero = zero + 1;
    }
    printf("No of posi %d\n", posi);
    printf("No of negative %d\n", nege);
    printf("No of zero %d\n", zero);
    printf("No of even %d\n", even);
    printf("No of odd %d\n", odd);
    return 0;
}

// Progarm 2
// If an array arr contains n elements, then write a program to check if arr[0] = arr[n-1], arr[1] = arr[n-2] and so on....
int mn()
{
    int n, i;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n / 2;)
    {
        if (arr[i] == arr[n - 1 - i])
            i++;
        else
            break;
    }
    if (i == (n / 2))
        printf("Equal"); // return 1;//Equal
    else
        printf("Not Equal"); // return 0;//Not Equal

    return 0;
}

// Program 3
// Write a program using pointer to find the smallest number in an array of 25 integers.
int smallest(int *p, int size)
{
    int i, min;
    min = *p;
    for (i = 0; i < size; i++)
    {
        if (*(p + i) < min)
            min = *(p + i);
    }
    return min;
}
int n()
{
    int arr[] = {2, 4, 5, 1, 7, 0, 4, 87, 45, 12, 4, 5, 1, 7, 0, 4, 87, 45, 1, 0, 4, 87, 45, 1};
    printf("%d", smallest(&arr[0], 20));
    return 0;
}

// Program 4 // *****Isertion Sort*****
// Implement the insertion Sort algorithm shown in Figure 13.3 on a set of 25 numbers.
//  Iteration 1   Iteration 2   Iteration 3   Iteration 4   Result
//     44<--         33            33<--         22<--       0[11]
//    (33)-|         44            44  |         33  |       1[22]
//     55           (55)]          55  |         44  |       2[33]
//     22            22           (22)--         55  |       3[44]
//     11            11            11           (11)--       4[55]
int insertionSort(int *arr, int n)
{
    int count = 0;
    int temp;
    for (int i = 0; i < n; i++)
    {
        temp = *(arr + i + 1); // inserting a element to temp
        while (temp < *(arr + i) && i >= 0)
        {
            *(arr + i + 1) = *(arr + i);
            *(arr + i) = temp;
            i--;
            count++;
        }
    }
    return count;
}
int f4()
{
    int a[] = {5, 4, 3, 2, 1, 8, 7, 6, 4, 95, 4544, 1, 5, 1, 17, 12, 55, 78, 545, 14};
    int count;
    count = insertionSort(a, 20);
    printf("times looped: %d\n", count);

    for (int i = 0; i < 20; i++)
    {
        printf(" %d ", a[i]);
    }
    return 0;
}

// Program 5
// Write a program which perform the following tasks:
// - Initialize an array of 10 elments in main()
// - pass the entire array to a function modify()
// - In modify() multiply each element of array by 3
// - Return the control to main and print the element of new array in main()
void modify(int *p, int *new)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        *new = *p * 3;
        new ++;
        p++;
    }
}
int f5()
{
    int i;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int new[10], *ptr;
    ptr = &new[0];
    modify(&arr[0], &new[0]);
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    return 0;
}

// Program 6
// For the following set of sample data, compute the standard deviation and the mean.
// -6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2
float mean(int *arr, int n)
{
    float Mean;
    for (int i = 0; i < n; i++)
    {
        Mean += *(arr + i);
    }
    Mean = Mean / n;
    return Mean;
}
float standardDeviation(int *arr, int n)
{
    float Mean, deviation = 0, stDev;
    Mean = mean(arr, n);
    for (int i = 0; i < n; i++)
    {
        deviation += pow((*(arr + i) - Mean), 2);
    }
    stDev = sqrt(deviation / n);
    return stDev;
}
int f6()
{
    int arr[] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
    float stDev;
    stDev = standardDeviation(arr, 15);
    printf("Standard Deviation is: %f", stDev);
    return 0;
}

// Program 7
//  The area of a triangle cna be computed by the sine law when 2 sides and the angle between them are known.
//  Area = (1.0/2.0)*a*b*sin(angle)
//  Given the following 6 triangular pieces of land, write a program to find their area and determine which is largest.
//  Plot No.        a         b         angle
//     1         137.40    080.90       0.78
//     2         155.20    092.62       0.89
//     3         149.30    097.93       1.35
//     4         160.00    100.25       9.00
//     5         155.60    068.95       1.25
//     6         149.70    120.00       1.75
float *calculateArea(float *a, float *b, float *angle, int *size) 
{
    static float area[6];
    for (int i = 0; i < 6; i++)
    {
        area[i] = (1.0 / 2.0) * *(a + i) * *(b + i) * sin(*(angle + i));
    }
    *size = sizeof(area)/sizeof(area[0]);
    return area;
}
float sortMax(float *arr, int n)
{
    float temp;
    for (int i = 0; i < n; i++)
    {
        temp = *(arr + i + 1); // inserting a element to temp
        while (temp < *(arr + i) && i >= 0)
        {
            *(arr + i + 1) = *(arr + i);
            *(arr + i) = temp;
            i--;
        }
    }
    return *(arr+n);
}
int maif7()
{
    float a[6] = {137.40, 155.20, 149.30, 160.00, 155.60, 149.70},
          b[6] = {280.90, 092.62, 097.93, 100.25, 068.95, 120.00},
          angle[6] = {0.78, 0.89, 1.35, 9.00, 1.25, 1.75};
    float *arr;
    int size;
    arr = calculateArea(a, b, angle, &size);

    for (int i = 0; i < size; i++)
    {
        printf("%f \n",*(arr+i));
    }

    printf("Max Area is: %f",sortMax(arr,size));
    return 0;
}

//Program 8


//Program 9
//

//Program 10