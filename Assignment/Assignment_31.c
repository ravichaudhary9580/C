#include<stdio.h>
int greatest(int a[], int size);

//Program 1

int greatest(int a[], int size)
{
    int i,max;
    max=a[0];
    for(i=1;i<size;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}

//Program 2

int smallest(int a[], int size)
{
    int i,min;
    min=a[0];
    for(i=1;i<size;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    return min;   
}

//Program 3

void sort(int a[], int size)
{
    int i,round,temp;
    for(round=1;round<size;round++)
    {
    for(i=0;i<size-round;i++)
    {
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    }
    for(i=0;i<size;i++)
    {
    printf("%d ",a[i]);
    }
}


//Program 4

void rotate(int a[], int dir, int posi,int size)
{
    int i,temp;
    if(dir==0)
    {
        while(posi)
        {
            temp=a[0];
        for(i=0;i<size;i++)
        {
            a[i]=a[i+1];
            if(i==(size-1))
            a[i]=temp;
        }
        posi--;
        }
    }
    if(dir==1)
    {
         while(posi)
        {
            temp=a[size-1];
        for(i=size-1;i>0;i--)
        {
            a[i]=a[i-1];
           
        }
            a[i]=temp;
        posi--;
        }
    }

    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}



//Program 5

int findFirstAdjacentDuplicate(int a[],int size)
{
    int i;
    for(i=0;i<size;i++)
    if(a[i]==a[i+1])
    return a[i];
    else
    return -1;//Exception handling use to solve this.......
}




int main()
{
    int dir,posi,size;
    int i;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int a[size];
    printf("\nEnter the elements of array:");
    for(i=0;i<size;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("\nFor Left=0  Right=1\nEnter the direction(0/1):");
    scanf("%d", &dir);
    printf("\nNo of position to shift:");
    scanf("%d",&posi);
    printf("\n");
    rotate(a,dir,posi,size);
    return 0;
}




