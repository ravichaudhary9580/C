#include<stdio.h>
#include<stdbool.h>

//Program 1
int greatest(int b[],int size)
{
    int greatest;
    greatest = b[0]; 
    for(int i=0;i<size;i++) 
    {
        if(b[i]>greatest)
            greatest=b[i];
    }
    return greatest;
}

//Program 2
int smallest(int b[],int size)
{
    int smallest;
    smallest=b[0];
    for(int i=0;i<size;i++){
        if(b[i]<smallest)
            smallest=b[i];
    }
    return smallest;
}

//Program 3
void sort(int arr[],int size)
{
    int temp;
    for(int n=0;n<size-1;n++){
        for(int i=0;i<size-1;i++){
            if(arr[i]>arr[i+1]){
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
    }
}

//Program 4
void rotate(int arr[], int size, int position, bool d)
{
    //d=1 Right      d=0 Left
    if(d){
        for(int n=0;n<position;n++){
            int temp = arr[size-1];
            for(int i=0;i<size-1;i++){
                arr[size-i-1]=arr[size-i-2];
                if(i==size-2)
                    arr[0]=temp;
            } 
        }
    }
    else{
        for(int n=0;n<position;n++){
            int temp = arr[0];
            for(int i=0;i<size-1;i++){
                arr[i]=arr[i+1];
                if(i==size-2)
                    arr[size-1]=temp;
            }
        }
    }
}

//Program 5
int findFirstAdjacentDuplicate(int arr[],int size)
{
    for(int i=0;i<size-1;i++){
        if(arr[i]==arr[i+1])
            return arr[i];
        else
        return -1;
    }
}

int main()
{
    int a[10]={1,3,6,2,9,5,8,15,7,4};
    printf("Greatest Number in Array is: %d\n",greatest(a,11));

    printf("Smallest Number in Array is: %d\n",smallest(a,11));
    
    sort(a,10);
    for(int i=0;i<10;i++)
    {
        printf(" %d ",a[i]);
    }
 
    printf("\n");
    printf("Rotate Right\n");
    rotate(a,10,2,1);
    for(int i=0;i<10;i++)
    {
        printf(" %d ",a[i]);
    }
     printf("\n");
    printf("Rotate Left\n");
    rotate(a,10,2,0);
    for(int i=0;i<10;i++)
    {
        printf(" %d ",a[i]);
    }
    
    printf("\n%d",findFirstAdjacentDuplicate(a,10));
    return 0;
}