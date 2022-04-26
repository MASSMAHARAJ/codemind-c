#include<stdio.h>
int main()
{
    int n,alt,d,N=0;
    scanf("%d",&n);
    alt=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        N=N*10+d;
    }
    if(n<0)
    {
        printf("%d",N*-1);
    }
    else
    {
        
        printf("%d",N);
    }
}