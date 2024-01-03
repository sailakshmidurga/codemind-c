#include<stdio.h>
int main()
{
    int t,n,temp,max=0;
    t=n;
    scanf("%d",&n);
    while(n!=0)
    {
        temp=n%10;
        if(temp>max)
        {
            max=temp;
        }
        n=n/10;
    }
    printf("%d",max);
}