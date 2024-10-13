//Program 34
//Write a program to print 24 hours of day with suitable suffixes like AM, PM, Noon and Midnight.
#include<stdio.h>
int main()
{
    int hour;
    for(hour=0;hour<=23;hour++){
        if(hour==0)
            printf("12:00 Midnight\n");
        else if(hour<12)
            printf("%d:00 AM\n",hour);
        else if(hour==12)
            printf("%d:00 Noon\n",hour);
        else
            printf("%d:00 PM\n",hour%12);
    }
    return 0;
}