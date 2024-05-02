  #include<stdio.h>

//Program 1
  int string_len(char str[])
  {
    int i;
    for(i=0;str[i];i++);
    return i;
  }


//Program 2



//Program 3


//Program 4 
void string_upper(char str[])
{
    int i;
    for(i=0;str[i];i++)
    { 
        if (str[i]==32)
         str[i]=64;

    str[i]=str[i]-32;
    }
    // for(i=0;str[i];i++)
    // printf("%c",str[i]);
    printf("%s",str);
}


//Program 5
void string_lower(char str[])
{
    int i;
    for(i=0;str[i];i++)
    { 
        if (str[i]==32)
         str[i]=0;

    str[i]=str[i]+32;
    }
    for(i=0;str[i];i++)
    printf("%c",str[i]);
}


  int main()
  {
    // char str[]="Ravi chaudhary";
    // printf("%d",string_len(str));

    char str[25];
    printf("Enter a string in Lower case:");
    gets(str);
    string_upper(str);
    return 0;
  }