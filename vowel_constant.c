#include<stdio.h>
void main()
{
    char ch,ascii;
    printf("enter the alphabet:");
    scanf("%c",&ch);
    printf("ascii value of %c=%d\n",ch,ch);
    if(ch==97||ch==101||ch==105||ch==111||ch==117||ch==65||ch==69||ch==73||ch==79||ch==85)
    {
        printf("alphabet is vowel");
    }
    else
    {
        printf("alphabet is constant:");
    }
}