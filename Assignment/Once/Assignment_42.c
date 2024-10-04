#include<stdio.h>

//Program 1
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int pro1()
{
    int a,b;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("\nAfter swaping: %d %d",a,b);
    return 0;
}

//Program 2
void search_all_occurrences(char *str, char ch, int *arr)
{
    int i,j=0;
    for(i=0;str[i];i++){
        if(ch==str[i]){
            // printf("%d ",i);
            arr[j]=i;
            j++;
        }
    }
    for(j=0;j<5;j++)
    printf("%d ",arr[j]);
}
int pro2()
{
    char str[]="aravichaudhary";
    char ch='a';
    int arr[5]={0};
    search_all_occurrences(str,ch,arr);
    return 0;
} 

//Program 3
void lowecase(char *str)
{
    
}
int main()
{

}

//Program 4
void uppercase(char *str)
{

}

//Program 5





