#include<stdio.h>
int main()
{
    int d,n,alt,sum=0;
    scanf("%d",&n);
    alt=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        sum=sum+d;
    }
    if(alt%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}