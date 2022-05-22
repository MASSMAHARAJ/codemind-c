#include<stdio.h>
int main()
{
    int n,alt,d,sum=0;
    scanf("%d",&n);
    alt=n;
    while(alt)
    {
        d=alt%10;
        alt=alt/10;
        sum=sum+d;
    }
    if(n%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}