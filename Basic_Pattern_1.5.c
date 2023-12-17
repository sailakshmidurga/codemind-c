#include<stdio.h>
int main()
{
    int i,j,n,count='A';
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",count);
        }
        count=count+1;
        printf("
");
    }
}