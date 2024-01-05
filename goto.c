//title of program
//Program based on goto statement 
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int i=0;
loop_start:
if(i<5){
//output statement 
printf("%d",i);
i++;
goto loop_start;
}
//output statement 
printf("\n loop finished.\n");
}