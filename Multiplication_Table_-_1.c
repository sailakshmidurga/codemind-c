#include<stdio.h>
int main()
{
    int i,n,a,b;
    scanf("%d%d",&n,&a);
    for(i=1;i<=12;i++)
    {
        b=n*i;
        printf("%d x %d = %d
",n,i,b);
    }
}