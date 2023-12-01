#include<stdio.h>
int fact(int);
void main()
{
    int a,fact1;
    printf("\n enter the number to calculate sum of cubes:");
    scanf("%d",&a);
    fact(a);
    fact1=fact(a);
    printf("factorial of %d is:%d",a,fact1);
}
int fact(int x)
{
    if(x>1)
    return (x*x*x)+fact(x-1);
    else
    return 1;
}