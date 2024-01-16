#include<stdio.h>
int main()
{
    int n,m,i,j,es=0,os=0,fact;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           if(a[i][j]%2==0)
           {
               es=es+a[i][j];
           }
        }
    }
        printf("%d ",es);
           for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           if(a[i][j]%2!=0)
           {
               os=os+a[i][j];
           }
        }
    }
        printf("%d",os);
}