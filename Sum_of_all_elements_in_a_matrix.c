#include<stdio.h>
int main()
{
    int s,n,i,j,sum=0;
    scanf("%d%d",&s,&n);
    int a[s][n];
    for(i=0;i<s;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        sum=sum+a[i][j];
        }
    }
    printf("%d",sum);
}