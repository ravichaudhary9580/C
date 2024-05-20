#include<stdio.h>
#include<stdlib.h>
// we need to use an header file as we use exit function so add it 
//Program 1

/*int main()
{
    int n;
    printf("Enter a Month number:");
    scanf("%d",&n);
    switch (n)
    {
    case 1: case 3: case 5: case 7: case 8:  case 10: case 12:
        printf("31 days ");
        break;

   case 4: case 6: case 9:  case 11:
        printf("30 days ");
        break;
   
   case 2:
        printf("28 or 29 days ");
        break;
        
    default:
        printf("Not a month");
        break;
    }
    return 0;
}*/


//Program 2 

/*int main()
{
    int a,b;
    int choice,exit=1;
    printf("1- Addition \n2- Subtraction \n3- Multiplication \n4- Division \n5- Exit\n");
    do
    {
    printf("\nChoose a option:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("Enter two number:");
        scanf("%d %d",&a,&b);
        printf("\nSum is %d",a+b);
        break;

        case 2:
        printf("Enter two number:");
        scanf("%d %d",&a,&b);
        printf("\nDifference is %d",a-b);
        break;

        case 3:
        printf("Enter two number:");
        scanf("%d %d",&a,&b);
        printf("\nProduct is %d",a*b);
        break;

        case 4:
        printf("Enter two number:");
        scanf("%d %d",&a,&b);
        printf("\nQutient is %d",a/b);
        break;

        case 5:
        exit=0;
        break;
    }
    }while(exit==1);
    return 0;
}*/


//Program 3

/*int main() 
{
     int choice;
     printf(" Enter a week day number:");
     scanf("%d",&choice);

     switch (choice)
     {
        case 1:
           printf("\"May your morning be as sweet as your smile\"");
           break;
        case 2:
           printf("\"May your day be filled with sunshine and laughter\"");
           break;
        case 3:
           printf("\"May your morning be filled with love and inspiration\"");
           break;
        case 4:
           printf("\"Rise and shine, beautiful\"");
           break;
        case 5:
           printf("\"Hello, sunshine!\"");
           break;
        case 6:
           printf("\"Your smile is one of my favorite things\"");
           break;
        case 7:
           printf("\"Your smile is contagious, and I love it\"");
           break;
     default:
        break;
     }
     
     return 0;
}*/


//Program 4

/*int main()
{
    int a,b,c,choice;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    printf("\n1- Check numbers are lengths of an isosceles triangle or not.\n2- Check numbers are lengths of an right angled triangle or not.\n3- Check numbers are lengths of an equilateral triangle or not.\n4- Exit");
    
    while(1){
    printf("\nEnter the choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
          if(a+b>c && b+c>a && c+a>b)
            if(a==b||b==c||c==a)
            printf("Isosceles Triangle");
            else 
            printf("Not");
          else 
          printf("Invalid sides of triangle");
        break;

        case 2:
           if(a+b>c && b+c>a && c+a>b)
            if((c*c==a*a+b*b)||(b*b==a*a+c*c)||(a*a==b*b+c*c))
            printf("Right angled triangle");
            else 
            printf("Not");
          else 
          printf("Invalid sides of triangle");
        break;

        case 3:
           if(a+b>c && b+c>a && c+a>b)
            if(a==b&&b==c)
            printf("Equilateral Triangle");
            else
            printf("Not");
          else 
          printf("Invalid sides of triangle");
        break;

        case 4:
        exit(0);    
        break;
    }
    }
    return 0;
}*/


//Program 5

/*int main()
{
    int choice;
    printf("Enter a choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("good");
        break;

        case 2:
        printf("better");
        break;

        case 3:
        printf("best");
        break;

        default :
        printf("invalid");
        break;
    }
    return 0;
}*/
