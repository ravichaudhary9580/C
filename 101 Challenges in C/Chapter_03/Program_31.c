//Program 31
//Write a program to produce the following output.
//     1
//    2 3
//   4 5 6
//  7 8 9 10
#include<stdio.h>
int main()
{
    int i,j,n=1,flag=1;
    for(i=1;i<=4;i++){
        for(flag=1,j=1;j<=7;j++){
            if(j>=5-i && j<=3+i){
                if(flag)
                    printf("%d",n++);
                else
                    printf(" ");
                flag=1-flag;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}