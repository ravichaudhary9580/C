//Write a program that receives month and date of birth as input and prints the corresponding Zodiac sign on the following table:
//Zodiac Sign           From -- To
//Capricorn           December 22 - January 19
//Aquarius            January 20 - February 17
//Pisces              February 18 - March 19
//Aries               March 20 - April 19
//Taurus              April 20 - May 20
//Gemini              May 21 - June 20
//Cancer              June 21 - July 22
//Leo                 July 23 - August 22
//Virgo               August 23 - September 22
//Libra               September 23 - October 22
//Scorpio             October 23 - November 21
//Sagittarius         November 22 - December 21

#include<stdio.h>
int main()
{
    int m,d;//m=month  d= date
    printf("Enter the Month and Date :");
    scanf("%d %d",&m,&d);
    if(d<=0||m<=0)
    printf("Invalid date");
//Capricorn           December 22 - January 19
    else if((m==12&&d<=31)||(m==1&&d<=19))
    printf("Capricorn");
//Aquarius            January 20 - February 17  
    else if((m==1&&d<=31)||(m==2&&d<=17))
    printf("Aquarius");
//Pisces              February 18 - March 19
    else if((m==2&&d<=29)||(m==3&&d<=19))
    printf("Pisces");
//Aries               March 20 - April 19
    else if((m==3&&d<=31)||(m==4&&d<=19))
    printf("Aries");
//Taurus              April 20 - May 20
    else if((m==4&&d<=30)||(m==5&&d<=20))
    printf("Taurus");
//Gemini              May 21 - June 20
    else if((m==5&&d<=31)||(m==6&&d<=20))
    printf("Gemini");
//Cancer              June 21 - July 22
    else if((m==6&&d<=30)||(m==7&&d<=22))
    printf("Cancer");
//Leo                 July 23 - August 22
    else if((m==7&&d<=31)||(m==8&&d<=22))
    printf("Leo");
//Virgo               August 23 - September 22
    else if((m==8&&d<=31)||(m==9&&d<=22))
    printf("Virgo");
//Libra               September 23 - October 22
    else if((m==9&&d<=30)||(m==10&&d<=22))
    printf("Libra");    
//Scorpio             October 23 - November 21
    else if((m==10&&d<=31)||(m==11&&d<=21))
    printf("Scorpio");
//Sagittarius         November 22 - December 21
    else if((m==11&&d<=30)||(m==12&&d<=21))
    printf("Sagittarius");
    else
    printf("Invalid Input");
    return 0;
}