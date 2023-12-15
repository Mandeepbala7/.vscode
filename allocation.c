#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int*arr1=(int*)malloc(n*sizeof(int));
    int*arr2=(int*)calloc(n,sizeof(int));
    if(arr1==NULL||arr2==NULL)
    {
        printf("memory error!\n");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            *(arr1+i)=i;
            printf("%d",*(arr1+i));
        }
        printf("\n");
        for(i=0;i<n;i++)
        {
            *(arr2+i)=n-i;
            printf("%d",*(arr2+i));
        }
        printf("\n");
    }
    int*arr3=(int*)realloc(arr1,n*sizeof(int));
    int*arr4=(int*)realloc(arr2,n*sizeof(int));
    if(arr3==NULL||arr4==NULL)
    {
        printf("reallocation failed!\n");
    }
       else
    {
        for(i=0;i<n;i++)
        {
            printf("%d ",*(arr3+i));
        }
        printf("\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",*(arr4+i));
        }
        printf("\n");
    }
    free(arr1);
    free(arr2);
    free(arr3);
    free(arr4);
    return 0;
}