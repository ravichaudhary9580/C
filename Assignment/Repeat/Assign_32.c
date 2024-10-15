void swap(int arr1[],int arr2[],int i, int j);
void uniqueElement(int arr[],int size);
#include<stdio.h>
//Program 1
void swap(int arr1[],int arr2[],int i, int j)
{
    int temp;
    temp = arr1[i];
    arr1[i] = arr2[j];
    arr2[j] = temp;
}

///Program 2
void countDuplicates()

//Program 3
void uniqueElement(int arr[],int size)
{
    int i,j,count;
    for(j=0; j<size; j++)
    {      
        for(count=0,i=0; i<size; i++){
            if(arr[j]==arr[i]){
                count++;
            }
            if(count==2) 
                break;
        }
        if(i==size)
            printf(" %d ",arr[j]);
    }
}

//Program 4
void merge(int arr1[],int arr2[],int size1,int size2,int mergedArray[])
{
    for(int i=0;i<size1;i++){
        mergedArray[i] = arr1[i];
    }
    for(int i=0;i<size2;i++){
        mergedArray[size1+i] = arr2[i];
    }
}

//Program 5
void countFrequency(int arr[],int size)
{
   
}

int main()
{
    int a[10]={1,3,6,2,2,5,8,1,7,4};
    int b[10]={1,3,6,2,2,5,8,1,7,4};
   /*  int mergedArray[20];
    merge(a,b,10,10,mergedArray);
    for(int i=0;i<20;i++){
        printf(" %d ",mergedArray[i]);
    } */
    countFrequency(a,10);
    return 0;
}