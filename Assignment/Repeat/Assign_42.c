#include<stdio.h>
//Program 1
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

//Program 2
void search_all_occurrences(char *str, char ch, int *arr)
{
    int j=0;
    for(int i=0;str[i];i++){
        if(ch==str[i]){
            arr[j]=i;
            j++;
        }
    }
}

int main()
{
    char str[]="ravichaudhary";
    int occ[5];
    search_all_occurrences(str,'a',occ);
    
    for(int j=0;j<=5;j++)
        printf(" %d ",occ[j]);

}