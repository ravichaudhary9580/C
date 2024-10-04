#include<stdio.h>
#include<stdlib.h>

//Program 1

/*int main()
{
    int marks;
    printf("Enter mark obtained:");
    scanf("%d",&marks);
    switch(marks)
    {
        case 90 ... 100:
        printf("Grade A");
        break;
        case 80 ... 89:
        printf("Grade B");
        break;
        case 70 ... 79:
        printf("Grade C");
        break;
        case 60 ... 69:
        printf("Grade D");
        break;
        case 50 ... 59:
        printf("Grade E");
        break;
        case 49 ... 1: 
        printf("Grade F");
        break;
        default:
        printf("Invalid Marks");
        break;
    }
    return 0;
}*/

//Program 2

/*int main()
{
    int choice;
    while(1)
    {
        printf("1- Factorial of a number\n");
        printf("2- Check Even or Odd\n");
        printf("3- Area of Circle\n");
        printf("4- Sum of first N natural numbers\n");
        printf("5- Exit\n");
        printf("\nEnter the choice:");
        scanf("%d",&choice);
    switch(choice)
    {
        case 1:
                {
                    int i,n,fact=1;
                    printf("\nEnter a number:");
                    scanf("%d",&n);
                    for(i=1;i<=n;i++)
                    {
                        fact=fact*i;
                    }
                    printf("\nFactorial of %d is %d\n\n",n,fact);
                    break;
                } 

        case 2:
                {
                    int n;
                    printf("Enter a number:");
                    scanf("%d",&n);
                    if(n%2==0)
                    printf("Even");
                    else 
                    printf("Odd");
                    break;
                }

        case 3:
                {
                    float r,area;
                    printf("Enter radius:");
                    scanf("%f",&r);
                    area=3.14*r*r;
                    printf("Area is %f",area);
                    break;
                }
            
        case 4:
                {
                    int n,sum=0,i;
                    printf("Enter the number:");
                    scanf("%d",&n);
                    for(i=1;i<=n;i++)
                    {
                        sum=sum+i;
                    }
                    break;
                }

        case 5:
           exit(0);
           break;
    }
    }
    return 0;
}*/

//Program 3

/*int main()
{
    char x;
    printf("Enter a character:");
    scanf("%c",&x);

    switch(x)
    {
        case'a' ... 'z':
        printf("Lower case");
        break;

        case'A' ... 'Z':
        printf("Upper case");
        break;

        case 0 ...9: 
        printf("Digit");
        break;

        default :
        printf("Special Character");
    }
}*/

//Program 4

/*int main()
{
    char x;
    printf("Enter a alphabet:");
    scanf("%c",&x);

    switch (x)
    {
     case'b': case'c': case'd': case'f': case'g': case'h': case'j': case'k': case'l': case'm': case'n': case'p': case'q': case'r': case's': case't':  case'v': case'w': case'x': case'y': case'z': case'B': case'C': case'D':  case'F': case'G': case'H': case'J': case'K': case'L': case'M': case'N':  case'P': case'Q': case'R': case'S': case'T': case'U': case'V': case'W': case'X': case'Z':
          printf("Consonant");
          break;
    
    case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
          printf("Vowel");
          break;

    default :
    printf("Some other special character");
    }
    return 0;
}*/

//Program 5

/*int main()
{
    int choice;
    while(1)
    {
        printf("1- Calculate LCM of two numbers\n");
        printf("2- Calculate sum of the digits of a number\n");
        printf("3- Volume of Cuboid\n");
        printf("4- Check wether a given number is Prime or Not\n");
        printf("5- Exit\n");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        
        switch (choice)
        {
        case 1:
            {
                int a,b,L;
                printf("\nEnter two numbers:");
                scanf("%d %d",&a,&b);
                L=a>b?a:b;
                while(L>a*b)
                {
                    if(L%a==0&&L%b==0)
                    break;
                    L++;
                }
                printf("\nLCM is %d\n\n",L);
            }
            break;

        case 2:
            {
              int n,sum=0;
              printf("\nEnter a number:");
              scanf("%d",&n);
              while(n>0)
              {
                sum=sum+n%10;
                n=n/10;
              }
              printf("\nSum of digits is: %d\n\n",sum);
            }
            break;

        case 3:
            {
                int l,b,h,vol;
                printf("Enter Length, Breadth and Height of Cuboid:");
                scanf("%d %d %d",&l,&b,&h);
                vol=l*b*h;
                printf("\nVolume is: %d\n\n",vol);
            }
            break;

        case 4:
            {
                int n,i=2;
                printf("Enter a number:");
                scanf("%d",&n);
                while(i<n)
                {
                    if(n%i==0)
                    {
                    printf("Not Prime\n\n");
                    break;
                    }
                    i++;
                }
                    if(i==n)
                    printf("\nPrime\n\n");
            }
            break;
        case 5:
            exit(0);

        default :
            printf("\nInvalid Choice\nProgram TERMINATED");
            exit(0);
        }
    }
    return 0;
}*/
