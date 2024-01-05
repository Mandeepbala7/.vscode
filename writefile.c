#include<stdio.h>
int main()
{
    char str[50];
    char filename[]="test1.txt";
    FILE*fp=fopen(filename,"w");
    if(fp==NULL)
    {
        printf("error opening th file%s",filename);
        return-1;
    }
    printf("how many lines want to insert");
    int n,i;
    scanf("%d",&n);
    printf("error the content");
    for(i=0;i<n;i++)
    {
        scanf("%[^\t]s",str);
        printf("%s\n",str);
        fprintf(fp,str);
    }
    printf("file write to content to file\n");
    fclose(fp);
    return 0;
}