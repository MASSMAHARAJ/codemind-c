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
int main()
{
    int n,r=0,d;
    scanf("%d",&n);
    if(isprime(n))
    {
        while(n)
        {
            d=n%10;
            n=n/10;
            r=r*10+d;
        }
        if(isprime(r))
        {
            printf("circular prime");
        }
        else
        {
            printf("prime but not a circular prime");
        }
    }
    else
    {
        printf("not prime");
    }
}