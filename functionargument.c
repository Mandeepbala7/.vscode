//title of program
//Program based on function with argument with return
#include<stdio.h>
//function heading
int avg(int[],int);
void main()
{
//variable declaration
int mark[]={77,88,99,88,99};
int size,average;
size=sizeof(mark)/sizeof(mark[0]);
average=avg(mark,size);
//output statement 
printf("average=%d\n",average);
//output statement 
printf("inside the main fun size of the array(in bytes) is:%d",sizeof(mark));
}
int avg(int mark1[],int size)
{
int i,sum=0,average=0;
for(i=0;i<size;i++){
sum=sum+mark1[i];
average=sum/size;
}
//output statement 
printf("inside the sub fun size of the array(in bytes) is:%d\n",sizeof(mark1));
return average;
}