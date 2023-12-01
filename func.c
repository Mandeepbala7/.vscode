#include<stdio.h>
void main()
{
    void add();
    add();//function calling
}
void add()
{
    int x,y;
    printf("enter the two number:");
    scanf("%d%d",&x,&y);
    int z=x+y;
    printf("sum=%d",z);
}