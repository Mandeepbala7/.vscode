//title of program
//Program for Calculator using ElseIfLadder
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int a,b,c;
//output statement  
printf("enter two numbers");
//input statement 
scanf("%d%d",&a,&b);
//variable declaration
int x;
//output statement 
printf("1=addition 2=subtraction 3=multiplication 4=division");
//input statement 
scanf("%d",&x);
//condition of elseifladder
if(x==1)
{
c=a+b;
//output statement 
printf("addition:%d",c);
}
else if(x==2)
{
c=a-b;
//output statement 
printf("subtraction:%d",c);
}
else if(x==3)
{
c=a*b;
//output statement 
printf("multiplication:%d",c);
}
else if(x==4)
{
if(b==0)
{
//output statement 
printf("Infinity");
}
else
{
c=a/b;
//output statement 
printf("division:%d",c);
}
}
}