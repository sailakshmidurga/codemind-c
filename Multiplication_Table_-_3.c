#include<stdio.h>
int main()
{
    int n,s,e,i;
    scanf("%d%d%d",&n,&s,&e);
    for(i=s;i<=e;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}