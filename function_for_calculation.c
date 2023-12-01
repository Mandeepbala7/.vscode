// program to make function for calculator
#include<stdio.h>
double add(double a,double b)
{
    return a+b;
}
double sub(double a,double b)
{
    return a-b;
}
double mul(double a,double b)
{
    return a*b;
}
int mod(int a,int b)
{
    return a%b;
}
double div(double a,double b)
{
    if(b!=0)
    {
        return a/b;
    }
    else
    {
        printf("error:cannonot divide by zero\n");
        return 0;
    }
}
int main()
{
    char operator;
    double num1,num2,result;
    printf("enter an operator(+,-,*,/,%%)\n");
    scanf("%c",&operator);
    printf("enter the number 1:\n");
    scanf("%lf",&num1);
    printf("enter the number 2\n");
    scanf("%lf",&num2);
    switch(operator)
    {
        case'+':
        result=add(num1,num2);
        break;
        case'-':
        result=sub(num1,num2);
        break;
        case'*':
        result=mul(num1,num2);
        break;
        case'%':
        result=mod((int)num1,(int)num2);
        break;
        case'/':
        result=div(num1,num2);
        break;
        default:
        printf("Error:invalid input operator\n");
        return 1;
    }
    printf("enter the result:%lf\n",result);
}