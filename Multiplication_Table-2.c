#include<stdio.h>
int main()
{
    int i,s,n,b;
    scanf("%d%d",&s,&n);
    for(i=1;i<=n;i++)
    {
        b=i*s;
        printf("%d x %d = %d
",s,i,b);
    }
}