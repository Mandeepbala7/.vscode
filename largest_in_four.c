#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter the four numbers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b&&a>c&&a>d)
    {
        printf("the greater no is %d",a);
    }
    if(b>a&&b>c&&b>d)
    {
        printf("the greater number is %d",b);
    }
    if(c>a&&c>b&&c>d)
    {
        printf("the greatest number is %d",c);
    }
    if(d>a&&d>b&&d>c)
    {
        printf("the greatest number is %d",d);
    }

}