//title of program
//Program based on auto storage class
#include<stdio.h>
//function heading
void fun();
void main()
{
//variable declaration
auto int a=10;
//output statement 
printf("%d\n",a);
{
//output statement
printf("%d\n",a);
fun();
fun();
fun();
}
}
//variable declaration
int a=90;
void fun()
{
//condition of auto storage class
auto int a=30,b;
b=a++;
//output statement 
printf("coming from fun b=%d\n",b);
}
