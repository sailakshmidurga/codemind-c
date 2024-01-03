#include<stdio.h>
int main()
{
    int r,s, n,pd,sum=0,t;
    scanf("%d",&n);
       pd=n*n;
    while(pd!=0)
    {
       sum=sum+pd%10;
       pd=pd/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    
    
}