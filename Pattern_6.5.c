#include<stdio.h>
int main()
{
    int i,j,n,k,count='A';
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c ",count);
        }
        count++;
        printf("
");
    }
}