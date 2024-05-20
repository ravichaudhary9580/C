#include<stdio.h>
int max(int A[],int size)
{
    int i,m;
    m=A[0];
    for(i=1;i<size;i++)
        if(m<A[i])
            m=A[i];
    return m;
}
int min(int A[],int size)
{
    int i,m;
    m=A[0];
    for(i=1;i<size;i++)
        if(m>A[i])
            m=A[i];
    return m;
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
void rotate(int A[],int size,int n,int d)
{
    int temp,i,shiftCount;
    //d == +1  (right) | d == -1 (left)
    if(d==1)
    {
        for(shiftCount=1;shiftCount<=n;shiftCount++){
            temp=A[size-1];
            for(i=size-1; i>0 ;i--)
            {
                A[i]=A[i-1];
            }
            A[i]=temp;
        }
    }
    else if(d==-1)
    {
        for(shiftCount=1;shiftCount<=n;shiftCount++){
            temp=A[0];
            for(i=0; i<size-1 ;i++)
            {
                A[i]=A[i+1];
            }
            A[i]=temp;
        }
    }
}
int findFirstAdjacentDuplicate(int A[],int size)
{
    int i;
    for(i=0;i<=size-2;i++)
        if(A[i]==A[i+1])
            return A[i];
    return -1;
}
int main(){
    char str[7]="BHOPAL";
    char s[7]="";
    int i, size=7;
    for(i=0; i<size-1; i++){
        s[i]=str[size-2-i];
    }
    printf("%s\n", s);
    printf("%s", str);
    return 0;
}