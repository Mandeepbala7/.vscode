#include<stdio.h>
void main()
{
    int a=10,b=20;
    void swap(int,int);
    printf("A=%d\tB=%d",a,b);
    swap(a,b);
    printf("before swaping");
    printf("A=%d\tB=%d\n",a,b);
    swap(&a,&b);
    printf("after swaping");
    printf("A=%d\tB=%d\n",a,b);
}
void swap(int x,int y)
{
    int t=x;
    x=y;
    y=t;
}
void swap(int*x,int*y)
{
    int t=*x;
    *x=*y;
    *y=t;
}