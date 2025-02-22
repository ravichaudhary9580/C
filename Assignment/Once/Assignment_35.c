#include <stdio.h>
#include <string.h>
// Program 1

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

void f1()
{
    char str[50];
    int i;
    printf("Enter your name in Upper case:");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    printf(str);
}

// Program 2

/* int main()
{
    char str[]="RAVI";
    char rev[5]="";
    int size=5,i;
    for (i=0;i<size-1;i++)
    {
        rev[i]=str[size-2-i];
    }
    printf("%s",str);
    printf("\n%s",rev);
    return 0;
}
 */

void f2()
{
    char str[50], ch;
    int i, l;
    printf("Enter a string:");
    fgets(str, 50, stdin);
    l = strlen(str);
    str[l - 1] = '\0';
    for (i = 0; i < l / 2; i++)
    {
        ch = str[i];
        str[i] = str[l - 2 - i];
        str[l - 2 - i] = ch;
    }
    printf("\n%s", str);
}
// Program 3

/* int main()
{
    char str[]="RAVI CHA$$37 354 2465f gfghbs ^&UD@HARY";
    int i,alphabet=0,digit=0,spcharacter=0;

    for(i=0;str[i];i++)
    {
        if(str[i]>64&&str[i]<91||str[i]>96&&str[i]<123)
        alphabet=alphabet+1;
        else if (str[i]>47&&str[i]<58)
        digit=digit+1;
        else
        spcharacter=spcharacter+1;
    }
    printf("\nAlphabets = %d",alphabet);
    printf("\nDigits = %d",digit);
    printf("\nSpecial character = %d",spcharacter);
    return 0;
}
 */

void f3()
{
    char str[50];
    int i, countalpha = 0, countdigit = 0, countspecial = 0;
    printf("Enter a string:");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            countalpha = countalpha + 1;
        else if (str[i] >= '0' && str[i] <= '9')
            countdigit = countdigit + 1;
        else
            countspecial = countspecial + 1;
    }
    printf("\nAlphabets = %d", countalpha);
    printf("\nDigits = %d", countdigit);
    printf("\nSpecial character = %d", countspecial);
}
// Program 4
//  int mai()
//  {
//      char str1[]="RAVI CHAUDHARY",HELL[15];
//      int i,p=0;
//      for(i=0;str1[i];i++,p++)
//      {
//      HELL[p]=str1[i];
//      }
//      printf("%s",HELL);
//      return 0;
//  }

void f4()
{
    char str[50], cpy[50];
    int i;
    printf("Enter a string:");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    for (i = 0; str[i]; i++)
    {
        cpy[i] = str[i];
    }
    cpy[i] = '\0';
    printf("%s", cpy);
}
// Program 5
/* int main()
{
    char str[15],ch,occ;
    int i;
    printf("Enter a string:");
    fgets(str,15,stdin);
    printf("Enter a character:");
    scanf("%c",&ch);
    for(i=0;str[i];i++)
    {
        if(ch==str[i])
        {
        occ=1;
        break;
        }
    }
    if(occ==1)
        printf("\n %d",i+1);
    return 0;
} */

void f5()
{
    int i;
    char str[50], ch;
    printf("Enter a string:");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    printf("Enter a Character:");
    scanf("%c", &ch);

    for (i = 0; str[i]; i++)
    {
        if (ch == str[i])
            break;
    }
    if (str[i] == '\0')
        printf("Not found");
    else
        printf("First occurrence is %d", i + 1);
}

int main()
{
    f2();
}