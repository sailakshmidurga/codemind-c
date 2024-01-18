#include<stdio.h>
int main()
{   int n, i,count=0;
scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    while(a[i]!=NULL)
    {
        count++;
        i++;
    }
    printf("%d",count);
}