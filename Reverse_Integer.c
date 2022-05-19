#include<stdio.h>
int main()
{
    int n,d,alt,rev=0;
    scanf("%d",&n);
    alt=n;
    while(alt)
    {
        d=alt%10;
        alt=alt/10;
        rev=rev*10+d;
    }
        printf("%d",rev);
}