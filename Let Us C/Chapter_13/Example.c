#include<stdio.h>

//Program 1
int mai()
{
    int i,temp,arr[10]={10,20,30,40,50,60,70,80,90,100};
    for(i=0;i<5;i++)
    {
        temp=arr[2*i];
        arr[2*i]=arr[2*i+1];
        arr[2*i+1]=temp;
    }
    for(i=0;i<10;i++)
    printf("%d ",arr[i]);
    return 0;
}

//Program 2
int ain()
{
    int arr1[]={1,2,3,4,5},arr2[5];
    int i;
    for(i=0;i<5;i++)
    {
        arr2[i]=arr1[5-1-i];
    }
    for(i=0;i<5;i++)
    printf("%d ",arr2[i]);
    return 0;
}

//Program 3
int main()
{
    int count=0,i,n,arr[]={10,20,30,30,20,30,20,30,40,54};
    printf("Enter a number to search in arrray:");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(n==arr[i])
        count=count+1;
    }
    printf("%d is found %d times in array.",n,count);
    return 0;
}