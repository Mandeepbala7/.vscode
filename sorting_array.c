#include<stdio.h>
void main()
{
    int n;
    printf("enter the limits");
    scanf("%d",&n);
    int a[n],i,j;
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int k=0;
        for(j=i+1;j<n-k;j++)
        {
            if(a[i]<a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
            k++;
        }
    }
    printf("sorted array\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}                                                                                