//Program 22
//Wtite a program that finds four-digit perfect square where the number represented by the first two digits and the number represented by the last two digits also perfect square.
#include<stdio.h>
#include<math.h>
int main()
{
    for(int i=1000;i<=9999;i++){
        if(sqrt(i)==i/sqrt(i))
            {
                int first_two,last_two;
                first_two=i/100;
                last_two=i%100;
                if((sqrt(first_two)==first_two/sqrt(first_two)) && (sqrt(first_two)==first_two/sqrt(first_two)))
                printf("\n%d",i);
            }
    }
    return 0;
}