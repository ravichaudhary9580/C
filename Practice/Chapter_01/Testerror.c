#include<stdio.h>

int main()
{
    '2.15' is String constant due to single quote 
     35,550 is not a constant
     3.25e2  is a valid REAL constant
     2e-3 is a valid REAL constant in Exponent form 
    'eLearning' is a String constant
    "show" is a String constant
    'Quest' is a String constant
    2³ is not a valid constant
    4 6 5 2  is not a valid contant due to space in between



    // int B'day;  Invalid variable name
    // int int; Invalid variable name
    // int $hello; Invalid variable name
    // int #HASH; Invalid variable name
    // int dot.; Invalid variable name
    int number; //Valid variable name
    int totalArea; //Valid variable name 
    // int _main(); Invalid variable name
    // int temp_in_Deg; Invalid variable name 
    // int total%;  Invalid variable name
    // int 1st; Invalid variable name
    // int  stack-queue; Invalid variable name
    // int variable name; Invalid variable name
    // int %name%; Invalid variable name
    int salary;  //Valid variable name



    (a) C Language was developed by Dennis Ritchie. --- 'T'
    (b) Operating system like Windows, UNIX, Lixux and Android are written in C. --- 'T'
    (c) C language programs can easily interact with hardware of a PC/Laptop. --- 'T'
    (d) A reak constant in C can be expressed in both Fractional and Exponential forms. --- 'T'
    (e) A character variable can at a time store only one character. --- 'T' 
    (f) The maximum value that an integer constant can have varies from one compiler to another. --- 'T'
    (g) Usually, all C statements are written in small case letters. --- 'T'
    (h) Spaces may be inserted between two words in a C statement. --- 'T'
    (i) Spaces can not be present within  a varable name. --- 'T'
    (j) //C programs are converted into machine language with the help of a program called editor. --- 'F'
    (k) Most development evironment provide an Editor to type a C program and a Compiler to convert it into machine language. --- 'T'
    (l) //int, char, float, real, integer, character, char, main, printf and scanf are keywords. --- 'F' 



    (a) \n ----- (4) Escape Sequence
    (b) 3.145 ----- (12) Real Constant
    (c) -6513 ----- (7) Integer Constant
    (d) 'D' ----- (3) Character Constant
    (e) 4.25e-3 ----- (11) Exponential form
    (f) main() ----- (6) Function 
    (g) %f, %d, %c ----- (10) Formate Specifier
    (h) ; ----- (2) Statement terminator
    (i) Constant ----- (1) Literal
    (j) Varable ----- (13) Identifier
    (k) & ----- (8) Addtess of operator
    (l) printf() ----- (9) Output Function
    (m)scanf() ----- (5) Input Function
}
// Program 1
// {    
//      The error in this Block of Code is that the  Declaration of the variable c datatype is int and that should be of float.
//     int a; float b; int c;
//     a=25; b=3.24; c=a+b*b-35; 
//       int a; float b; float c;
//       a=25; b=3.24; c=a+b*b-35; 
//     printf("%f",c);
//     return 0;
// }

// Program 2
 
//  {       // No Error
//     int a=35; float b=3.24; 
//     printf("%d %f %d",a,b+1.5,235);
//     return 0;
//  }

// Program 3
// {
//     int a,b,c;
//     scanf("%d %d %d",a,b,c);//Symbol &(address of) is not written before the variable name
//     return 0;
// }

// Program 4
// {
//     int m1,m2,m3  // Instruction terminator is not wirtten(;)
//     printf("Enter values of marks in 3 subjects:")
//     scanf("%d %d %d ", &m1,&m2,&m3)
//     printf("You entered %d %d %d",m1,m2,m3)
//     return 0;
// }
