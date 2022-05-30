#include<stdio.h>
int isprime(int n)
{
    int j;
    for(j=2;j<n;j++)
    {
        if(n%j==0)
        {
            return 0;
        }
    }
    return 1;
}
int ispalin(int n)
{
    int r=0,d,alt;
    alt=n;
    while(alt)
    {
        d=alt%10;
        alt=alt/10;
        r=r*10+d;
    }
    if(r==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,s=0;
    scanf("%d",&n);
    while(1)
    {
        n++;
        if(ispalin(n))
        {
            if(isprime(n))
            {
                printf("%d",n);
                break;
            }
        }
    }
}