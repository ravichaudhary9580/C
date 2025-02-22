#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Program 1
void sort_string(char str[])
{
    strlwr(str);
    int i, j, l;
    char temp;
    l = strlen(str);
    for (j = 0; j < l - 1; j++)
    {
        for (i = 0; i < l - j - 1; i++)
        {
            if (str[i] > str[i + 1])
            {
                temp = str[i];
                str[i] = str[i + 1];
                str[i + 1] = temp;
            }
        }
    }
}
void countfrequency(char str[])
{
    sort_string(str);
    int i, j, count = 0;
    for (i = 0; str[i]; i++)
    {
        count = 0;
        if (str[i] != str[i + 1])
        {
            count++;
        }
        else
        {
            while (str[i] == str[i + 1])
            {
                i++;
                count++;
            }
            count++;
        }

        printf("Frequency of %c is %d\n", str[i], count);
    }
}

// Program 2
int findword(char str[], char word[])
{
    int i, j = 0, l;
    for (i = 0; str[i]; i++)
    {
        j = 0;
        if (str[i] == word[j])
        {
            for (j = 0; word[j]; j++)
            {
                if (word[j] != str[i + j])
                    break;
            }
        }
        l = strlen(word);
        if (j == l)
            return 1; // Word found
    }
    return 0; // Not found
}

// Program 3
void capFirstChar(char str[])
{
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == ' ')
        {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
                str[i + 1] = str[i + 1] - 32;
        }
    }
}

// Program 4
int count_words(char str[])
{
    int i, count = 0;
    for (i = 0; str[i];)
    {
        if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
        {
            count = count + 1;
            while (str[i] != 32)
            {
                i++;
            }
        }
        while (str[i] == 32)
        {
            i++;
        }
    }
    return count;
}
void makeAcronym(char str[], char acr[])
{
    int words, i = 0, j = 0;
    words = count_words(str) - 1;
    for (words; words <= 0; words--)
    {
        acr[j] = str[i];
        while (str[i] != ' ')
        {
            i++;
        }
        i++;
        j++;
    }
}

// Program 5
char *concatStr(char str1[], char str2[])
{
    int l1, l2, l;
    char *str;
    l1 = strlen(str1);
    l2 = strlen(str2);
    l = l1 + l2;
    str = (char *)malloc(l);
    strcpy(str, str1);
    strcpy(&str[l1], str2);
    return str;
}
int main()
{
    /*  char str[] = "Ramesh Chand Tiwari";
     char acr[20];
     makeAcronym(str, acr);   
     printf("%s",acr); */

    return 0;
}
