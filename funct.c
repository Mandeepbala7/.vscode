//title of program
//Program based on function without return without argument
#include<stdio.h>
//function heading
void main()
{
void add();
//variable declaration
int a,b,c;
//output statement 
printf("enter two numbers");
//input statement 
scanf("%d%d",&a,&b);
c=a+b;
//output statement 
printf("sum=%d",c);
}
void add()
{
int x,y;
//output statement 
printf("enter the number");
//input statement 
scanf("%d%d",&x,&y);
int z=x+y;
}