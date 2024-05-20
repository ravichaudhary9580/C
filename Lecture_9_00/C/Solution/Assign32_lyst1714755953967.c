#include<stdio.h>
void swap(int A[],int i,int j)
{
    int t;
    t=A[i];
    A[i]=A[j];
    A[j]=t;
}
void sort(int A[],int size)
{
    int i,round,t;
    for(round=1;round<size;round++)
    {
        for(i=0;i<=size-1-round;i++)
        {
            if(A[i]>A[i+1])
            {
                t=A[i];
                A[i]=A[i+1];
                A[i+1]=t;
            }
        }
    }
}
int countDuplicates(int A[],int size)
{
    int i,j,dup=0;
    sort(A,size);
    for(i=0;i<size-1;)
    {
        if(A[i]==A[i+1]){
            dup++;
            for(j=i;i<size && A[j]==A[i];i++);
        }
        else
            i++;
    }
    return dup;
}
void printUnique(int A[],int size)
{
    int i,j;
    sort(A,size);
    for(i=0;i<size;)
    {
        printf("%d ",A[i]);
        if(i==size-1)
            break;
        if(A[i]==A[i+1]){
            for(j=i;i<size && A[j]==A[i];i++);
        }
        else
            i++;
    }

}
void merge(int A[],int B[],int size,int C[])
{
    int i,j,k;
    for(i=0,j=0,k=0;i<size&&j<size;k++)
    {
        if(A[i]>B[j])
        {
            C[k]=A[i];
            i++;
        }
        else
        {
            C[k]=B[j];
            j++;
        }
    }
    while(i<size)
    {
        C[k]=A[i];
        i++;
        k++;
    }
    while(j<size)
    {
        C[k]=B[j];
        j++;
        k++;
    }
}
void countFrequency(int A[],int size)
{
    int i,j,count;
    sort(A,size);
    for(i=0;i<size;)
    {
        for(count=0,j=i;i<size && A[j]==A[i];i++)
            count++;
        printf("\n%d - %d",A[j],count);
      
    }
}
int main()
{
    int a[]={2,2,2,3,3,4,5,5,6,6,6,6,7,8,8};
    countFrequency(a,15);
    /*int a[]={20,18,13,8,2};
    int b[]={15,9,6,3,1};
    int c[10];
    merge(a,b,5,c);*/
    printf("\n");
    return 0;
}