#include<stdio.h>

//Method of printing charcter/string 

// int main()
// {
//    char str[]="RAVI CHAUDHARY";
//     // int i;
//     //Method for printing the needed character
//     // for(i=0;str[i];i++)
//     // printf("%c",str[i]);
//    //Method for printing whole string 
//     printf("%s",str);
//     return 0;
// }

// Method of taking input character/string 

// This method is used to input one word 
// int main()
// {
//     char str[20];
//     printf("Enter your name:");
//     scanf("%s",str);
//     printf("\n%s",str);
//     return 0;
// }

//This method is used to input one string
// int main()
// {
//     char str[20];
//     printf("Enter your name:");
//     gets(str);
//     printf("%s",str);
//     return 0;
// }

//This method is used to print multiple string
/*int main()
{
    char str[8];
    printf("Enter your name:");                            need more learning
    fgets(str,stdin);
    printf("%s",str);
    return 0;   
}*/


//Program 1
/* int main()
{
    char str[]="RAVI CHAUDHARY";
    int i;
    for(i=0;str[i];i++);
    printf("Length of String: %d",i);
    return 0;
} */


// Program 2
// int main()
// {
//     char occ,str[]="RAVI CHAUDHARY";
//     int i,count;
//     printf("Enter a Character:");
//     scanf("%c",&occ);
    
//     for(i=0;str[i];i++)
//     {
//     if(occ==str[i])
//     count=count+1;
//     }
//     printf("%d",count);
//     return 0;
// }

//Program 3
// int main()
// {
//     char str[]="RAVI CHAUDHARY";
//     int i,count=0;
    
//     for(i=0;str[i];i++)
//     {
//     if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
//     count=count+1;
//     }
//     printf("%d",count);
//     return 0;
// }


// Program 4
/* int main()
{
    char space,str[]="RAVI CH AU DHARY";
    int i,count;
    space=' ';
    for(i=0;str[i];i++)
    {
    if(space==str[i])
    count=count+1;
    }
    printf("%d",count);
    return 0;
}
 */

//Program 5

// int main()
// {
//     char str[20];
//     int i;
//     printf("Enter your name in Lower case:");
//     gets(str);
//     for(i=0;str[i];i++)
//     {
//     if (str[i]==32)
//       str[i]=64;

//     str[i]=str[i]-32;
//     }
//     for(i=0;str[i];i++)
//     printf("%c",str[i]);
//     return 0;
// }