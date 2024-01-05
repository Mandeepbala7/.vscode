//title of program
//Program based on Extern storage class
#include<stdio.h>
//function heading
//variable (extern) declaration
extern int a=50;
void fun1();
void main()
{
fun1();
fun1();
fun1();
{
//outside statement 
printf("inside block1:%d\n",a);
}
//outside statement 
printf("outside the block ie main is:%d\n",a);
}
void fun1()
{
//variable declaration
static int a,b=90;
a=a+3;
b=b-10;
//output statement
printf("outside from function fun a is:%d and b is:%d\n",a,b);
a+=10;
}
