#include<stdio.h>
#include<string.h>
int main()
{
    int n,value;
    scanf("%d",&n);
    char a[n],b[n];
    scanf("%s%s",a,b);
    value=strcmp(a,b);
    if(value==0)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not Equal");
    }
}