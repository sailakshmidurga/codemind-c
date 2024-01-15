#include<stdio.h>
int main()
{
    int n,s,i,j,sr;
    scanf("%d%d",&n,&s);
    int a[n][s];
    for(i=0;i<n;i++)
    {
        for(j=0;j<s;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sr=0;
        for(j=0;j<s;j++)
        {
            sr=sr+a[i][j];
        }
        printf("%d ",sr);
    }
}