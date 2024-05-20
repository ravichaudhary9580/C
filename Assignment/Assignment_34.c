#include<stdio.h>
#include<string.h>
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
    fgets(str,8,stdin);
    printf("%s",str);
    return 0;   
}*/

void f1()
{
    char str[50];
    int i;
    printf("Enter a string:");
    // gets(str);
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0'; 
    for(i=0;str[i];i++);
    printf("Length is %d",i);
}

//Program 1
/* int main()
{
    char str[]="RAVI CHAUDHARY";
    int i;
    for(i=0;str[i];i++);
    printf("Length of String: %d",i);
    return 0;
} */
void f2()
{
    int i,count;
    char str[50],occ;
    printf("Enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';  
    printf("Enter a Character:");
    scanf("%c",&occ);
    
    for(i=0;str[i];i++)
    {
    if(occ==str[i])
    count=count+1;
    }
    printf("%d",count);   
}

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


void f3()
{
    char str[50],v[]="aeiouAEIOU";
    int i,j,count=0;
    printf("Enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';  
    for(j=0;v[j];j++)
    {
         for(i=0;str[i];i++)
         {
            if(v[j]==str[i])
            count=count+1;
         }
    }
    printf("%d",count);
}



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


void f4()
{
    char str[50],space=' ';
    int count=0,i;
    printf("Enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0'; 
    for(i=0;str[i];i++)
    {
    if(space==str[i])
    count=count+1;
    }
    printf("%d",count); 
}


// Program 4
/* int main()
{
    char space=' ',str[]="RAVI CH AU DHARY";
    int i,count;
   
    for(i=0;str[i];i++)
    {
    if(space==str[i])
    count=count+1;
    }
    printf("%d",count);
    return 0;
}
 */


void f5()
{
    char str[50];
    int i;
    printf("Enter your name in Lower case:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0'; 
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        str[i]=str[i]-32;
    }
    printf(str);
}

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