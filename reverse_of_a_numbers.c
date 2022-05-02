#include<stdio.h>
int main()
{
    int n,rev=0,d;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    printf("%d",rev);
}