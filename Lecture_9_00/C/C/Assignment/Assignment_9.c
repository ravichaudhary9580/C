#include<stdio.h>

//Program 1 
/*int main()
{
    int cp,sp,diff;
    printf("Enter CP:");
    scanf("%d",&cp);
    printf("Enter SP:");
    scanf("%d",&sp);
    
    if (sp>=cp)
        printf("Profit Percent is %d",((sp-cp)*100)/cp);
    else 
    printf(" Loss Percent is %d",((cp-sp)*100)/cp);
    return 0;
}*/


//Program 2

/*int main()
{
    int m1,m2,m3,m4,m5;
    printf("Enter marks of 5 subjects:");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    if (m1<33||m2<33||m3<33||m4<33||m5<33)
    printf("Failed");
    else
    printf("Passed");
    return 0;
}*/


//Program 3
int main()
{
    char n;
    printf("Enter an Alphabet:");
    scanf("%c",&n);
    if (n<91&&n>64)
    printf("Uppercase");
    else if (n<123&&n>96)
    printf("Lowercase");
    return 0;
}

//Program 4
/*int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n%6==0)
    printf("Number is divisble by 2 and 3");
    else printf("Not divisble by 2 and 3");
    return 0;
}*/


//Program 5
/*int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%7==0)
    printf("divisble by 7");
    else if(n%3==0)
    printf("divisble by 3");
    else
    printf("Not divisble by 7 or 3");
    return 0;
}*/