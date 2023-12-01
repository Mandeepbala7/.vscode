#include<stdio.h>
#include"sample.c"
void main()
{
    int a,b,c;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    c=sub(a,b);
    printf("subtract is=%d",c);
}