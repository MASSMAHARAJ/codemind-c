#include<stdio.h>
int ispalin(int n)
{
    int alt,d,r=0;
    alt=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        r=r*10+d;
    }
    if(r==alt)
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
    int n,n1,n2,d1,d2;
    scanf("%d",&n);
    n1=n-1;
    n2=n+1;
    while(ispalin(n1)!=1)
    {
        n1--;
    }
    d1=n-n1;
    while(ispalin(n2)!=1)
    {
        n2++;
    }
    d2=n2-n;
    if(d1==d2)
    {
        printf("%d %d",n1,n2);
    }
    if(d1<d2)
    {
        printf("%d",n1);
    }
    if(d1>d2)
    {
        printf("%d",n2);
    }
}