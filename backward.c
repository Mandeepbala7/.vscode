#include<stdio.h>
void main()
{
    int limit;
    printf("enter the limit");
    scanf("%d",&limit);
    while(limit>0)
    {
        printf("%d\n",limit);
        limit=limit-1;
    }
}