#include<stdio.h>
void main()
{
    int i=10;
    int *p;
    p++;
    printf("I=%d\n",i);
    printf("I=%d\n",*p);
    printf("I=%d\n",p);   
}