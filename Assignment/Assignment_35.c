#include<stdio.h>

//Program 1

// int main()
// {
//     char str[20];
//     int i;
//     printf("Enter your name in Upper case:");
//     gets(str);
//     for(i=0;str[i];i++)
//     {
//     if (str[i]==32)
//       str[i]=0;

//     str[i]=str[i]+32;
//     }
//     for(i=0;str[i];i++)
//     printf("%c",str[i]);
//     return 0;
// }


//Program 2

// int ain()
// {
//     char str[]="RAVI";
//     int count,i;
//     for(count=0;str[count];count++);

//     for(i=0;str[i];i++)
//     {
//         str[i]=str[count];                        NEED TO RECHECK
//         count--;
//     }
//     for(i=4;str[i];i--)
//     printf("%c",str[i]);
//     return 0;
// }


//Program 3 


// int main()
// {
//     char str[]="RAVI CHA$$37 354 2465f gfghbs ^&UD@HARY";
//     int i,alphabet=0,digit=0,spcharacter=0;
    
//     for(i=0;str[i];i++)
//     {
//         if(str[i]>64&&str[i]<91||str[i]>96&&str[i]<123)
//         alphabet=alphabet+1;
//         else if (str[i]>47&&str[i]<58)
//         digit=digit+1;
//         else 
//         spcharacter=spcharacter+1;
//     }
//     printf("\nAlphabets = %d",alphabet);
//     printf("\nDigits = %d",digit);
//     printf("\nSpecial character = %d",spcharacter);
//     return 0;
// }


//Program 4
// int mai()
// {
//     char str1[]="RAVI CHAUDHARY",HELL[15];
//     int i,p=0;
//     for(i=0;str1[i];i++,p++)
//     {
//     HELL[p]=str1[i];
//     }
//     printf("%s",HELL);
//     return 0;
// }


//Program 5
int main()
{
    char str[15],ch;
    int i;
    printf("Enter a string:");
    fgets(str,15,stdin);
    printf("Enter a character:");
    scanf("%c",&ch);
    for(i=0;str[i];i++)
    {
        if(ch==str[i])
        printf("%d, ",i+1);
    }
    return 0;

}