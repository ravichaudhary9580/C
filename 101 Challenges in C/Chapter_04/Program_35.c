//Program 35
//Write a general pupose function to convert any given year into its roman equivalent. Use the following roman equivalents for decimal numbers:
// 1-I, 5-V, 10-X, L-50, 100-C, 500-D, 1000-M.
//Example: 
//Roman Equivalent for 1988 is MDCCCCLXXXVIII
//Roman Equivalent for 1525 is MDXXV
#include<stdio.h>
int romanise(int y,int k,char ch);
int main()
{
    int yr;
    printf("Enter a year: ");
    scanf("%d",&yr);

    return 0;
} 

int romanise(int y,int k,char ch)
{
    if(y==4){
        printf("IV");
        return(y%4);
    }
    if(y==9){
        printf("IX");
        return(y%9);
    }
    if(y==49){
        printf("IL");
        return(y%49);
    }
    if(y==499){
        printf("IV");
        return(y%4);
    }
    if(y==4){
        printf("IV");
        return(y%4);
    }
    if(y==4){
        printf("IV");
        return(y%4);
    }
}