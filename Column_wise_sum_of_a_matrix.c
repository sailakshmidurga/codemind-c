#include<stdio.h>
int main()
{
    int n,s,i,j,sc;
    scanf("%d%d",&n,&s);
    int a[n][s];
    for(i=0;i<n;i++)
    {
        for(j=0;j<s;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<s;i++)
    {
         sc=0; 
        for(j=0;j<n;j++)
        {
            sc=sc+a[j][i];
        }
        printf("%d ",sc);
    }
}