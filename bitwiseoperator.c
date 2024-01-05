//title of program
//Program for bitwise operators
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int a=49,b=35,c=55;
//output statements
printf("AND gate=%d\n",(a&b));
printf("OR gate=%d\n",(a|b));
printf("XOR gate=%d\n",(a^b));
printf("NOT gate=%d\n",(~a));
printf("Left Shift=%d\n",(c<<2));
printf("Right Shift=%d\n",(c>>2));
}