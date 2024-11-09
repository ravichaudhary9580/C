#include<stdio.h>
//Program 1
int countVowel(char str[]){
    int count=0;
    for(int i=0;str[i];i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        count++;
    }
    return count;
}
int main()
{
    char str[]="ravichaudhary";
    printf("%d",countVowel(str));
    return 0;
}