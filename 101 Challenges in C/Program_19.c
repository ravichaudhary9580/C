//In digital world colors are specified in Red-Green-Blue(RGB) format, with values of R,G,B varying on an integer scale from 0 to 255. In print publishing the colors are mentioned in Cyan-Magenta-Yellow-Black(CMYK) format, with values of C,M,Y, and K varying on a real scale from 0.0 to 1.0. Write a program that converts RGB color to CMYK color as per the following formulae:
//White=Max(Red/255,Green/255,Blue/255)//white=Greater/255
//Cyan=(White-(Red/255))/White
//Magenta=(White-(Green/255))/White
//Yellow=(White-(Blue/255))/White
//Black=1-White
#include<stdio.h>
int main()
{
    int R,G,B,Max;
    float White,C,M,Y,K;
    printf("Enter the value of R,G, and B:");
    scanf("%d %d %d",&R,&G,&B);
    if((R<0||R>255)||(G<0||G>255)||(B<0||B>255)){
        printf("Invalid RGB Values");
        return 0;
    }
    else if(R==0 && G==0 && B==0){
        C=M=Y=0;
        K=1;
    }
    else{
        Max=R;
        if(G>R)
        Max=G;
        if(B>Max)
        Max=B;
    }
   
    White=(Max/255.0);
   
    C=(White-(R/255.0))/White;
    M=(White-(G/255.0))/White;
    Y=(White-(B/255.0))/White;
    K=1.0-White;
    printf("C, M, Y, K = %f, %f, %f, %f",C,M,Y,K);
    return 0;
}