#include<stdio.h>
#include<math.h>
int main()
{
    int num,temp;
    int sum=0,dc=0, pd;
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        temp=temp/10;
        dc++;
    }
    temp=num;
    while(temp!=0)
    {
        pd=temp%10;
        sum=sum+pow(pd,dc);
        temp=temp/10;
        dc--;
    }
    if(sum==num)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}