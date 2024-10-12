#include<stdio.h>
//Program 1
/*int main()
{   
    int num[10];
    printf("Enter the 10 values to sort in ascending order:\n");
    for(int i=0;i<=9;i++){
        scanf("%d",&num[i]);
    }
    for(int n=1;n<=10;n++)
    {
        for(int i=0;i<=9;i++)
        {   int temp;
            if(num[i]>num[i+1])
            {
                temp=num[i+1];
                num[i+1]=num[i];
                num[i]=temp;
            }
        }
    }
    for(int i=0;i<=9;i++){
        printf(" %d ",num[i]);
    }
    return 0;
}*/

// Program 2
/*int manin()
{
    int arraySize;
    printf("Enter array Size:");
    scanf("%d",&arraySize);
    int num[arraySize], res, nthLargest;
    printf("Enter the %d values:\n",arraySize);
    for(int i=0;i<arraySize;i++){
        scanf("%d",&num[i]);
    }
    printf("Find Nth largest value in array:");
    scanf("%d",&nthLargest);
    
    for(int n=1;n<=nthLargest;n++)
    {
        for(int i=0;i<=arraySize-1;i++)
        {   int temp;
            if(num[i]>num[i+1])
            {
                temp=num[i+1];
                num[i+1]=num[i];
                num[i]=temp;
            }
        }
    }
    res=num[arraySize-nthLargest];
    printf("\n%d st/nd/rd/th Largest: %d",nthLargest,res);
    return 0;
}*/

// Program 3
/* int main()
{
    int arraySize;
    printf("Enter array Size:");
    scanf("%d",&arraySize);
    int num[arraySize], nthSmallest, res;
    printf("Enter the %d values:\n",arraySize);
    for(int i=0;i<arraySize;i++){
        scanf("%d",&num[i]);
    }
    printf("Find Nth smallest value in array:");
    scanf("%d",&nthSmallest);
    
    for(int n=1;n<=nthSmallest;n++)
    {
        for(int i=0;i<arraySize-1;i++)
        {   int temp;
            if(num[i]<num[i+1])
            {
                temp=num[i+1];
                num[i+1]=num[i];
                num[i]=temp;
            }
        }
    }
    for(int i=0;i<arraySize;i++){
        printf(" %d ",num[i]);
    }
    res=num[arraySize-nthSmallest];
    printf("\n%d st/nd/rd/th Smallest: %d",nthSmallest,res);
    return 0;
} */

//Program 4
/* int main()
{
    int num[10];
    printf("Enter the 10 values to sort decending order:\n");
    for(int i=0;i<=9;i++){
        scanf("%d",&num[i]);
    }
    for(int n=1;n<=10;n++)
    {
        for(int i=0;i<=9;i++)
        {   int temp;
            if(num[i]<num[i+1])
            {
                temp=num[i+1];
                num[i+1]=num[i];
                num[i]=temp;
            }
        }
    }
    for(int i=0;i<=9;i++){
        printf(" %d ",num[i]);
    }
    return 0;
} */

//Program 5
int main()
{
    int arraySize;
    printf("Enter the size of array:");
    scanf("%d",&arraySize);
    int num1[arraySize],num2[arraySize];
    printf("Enter the values of array:\n");
    for(int i=0;i<arraySize;i++)
    {
        scanf("%d",&num1[i]);
    }
    for(int i=0;i<arraySize;i++)
    {
        num2[i]=num1[i];    
    }
    for(int i=0;i<arraySize;i++)
    {
        printf(" %d ",num2[i]);
    }
    return 0;
}
