#include<stdio.h>
int even_odd(int);
void main()
{
    int a,b;
    printf("enter the number:");
    scanf("%d",&a);
    even_odd(a);
}
int even_odd(int x)
{
    if(x%2==0)
    printf("%d is even",x);
    else
    printf("%d is odd",x);
}