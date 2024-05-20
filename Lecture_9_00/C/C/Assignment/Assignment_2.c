#include<stdio.h>
//Program 1
/*int main()
{
    int a,b,c;
    float avg;
    printf("Enter the three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    avg=(a+b+c)/3.0;
    printf("\nAverage is:%f",avg);
    return 0;
}*/

//Program 2
/*int main()
{
    int radius;
    printf("Enter the radius of circle:");
    scanf("%d",&radius);
    printf("Circumference of circle is %f",2*3.14*radius);
    return 0;
}*/

//Program 3
/*int main()
{
    int p,t;
    float r,si;
    printf("Enter the Principle Amount:");
    scanf("%d",&p);
    printf("Enter the Time(in Year):");
    scanf("%d",&t);
    printf("Enter the Rate of Interest:");
    scanf("%f",&r);
    si=(p*r*t)/100; 
    printf("Simple Interest is:%f",si);  
    return 0;
}*/

// Program 4
/*int main()
{
    int l,b,h,volume;
    printf("Enter the Length Bredth Height of Cuboid:");
    scanf("%d %d %d",&l,&b,&h);
    volume=l*b*h;
    printf("Volume of Cuboid is:%d",volume);
    return 0;
}*/

// Program 5  Method - 1
int main()
{
    int cp,sp,profit;
    float no_of_dozen, net_profit;
    printf("Enter the Cost Price:");
    scanf("%d",&cp);
    printf("Enter the Selling Price:");
    scanf("%d",&sp);
    profit=sp-cp;
    printf("Profit on 1 Dozen:%d",profit);
    no_of_dozen=25/12.0;
    net_profit=profit*no_of_dozen;
    printf("\nTotal no. of Bananas are 25");
    printf("\nNo. of dozens is %f",no_of_dozen);
    printf("\nProfit on 25 Bananas is %f",net_profit);
    return 0;
}

//Program 5 Method - 2
/*int main()
{
    int cp,sp,profit;
    double profit_of_1;
    printf("Enter the Cost Price of 1 dozen(CP):");
    scanf("%d",&cp);
    printf("Enter the Selling Price of 1 dozen(SP):");
    scanf("%d",&sp);
    profit=sp-cp;
    profit_of_1=profit/12.0;
    printf("\nProfit of 1 dozen:%d",profit); 
    printf("\nProfit of 1 Banana:%f",profit_of_1);
    printf("\nProfit of 25 Banana: %f",profit_of_1*25);
    return 0;
}*/








