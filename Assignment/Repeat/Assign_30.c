#include<stdio.h>
//Program 1
void f1()
{   
    int num[10];
    printf("Enter the 10 values to sort:");
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
}

// Program 2
void f2()
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
    printf("\n%dth/rd Largest: %d",nthLargest,res);
}

int main()
{
    f2();
    return 0;
}