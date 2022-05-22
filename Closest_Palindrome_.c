#include<stdio.h>
#include<math.h>
int ispalin(int n)
{
    int alt,k=0,d;
    alt=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        k=k*10+d;
    }
    if(k==alt)
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
    int n,n2,n1,d1,d2,k=0;
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
    if(d2<d1)
    {
        printf("%d",n2);
    }
    else if(d1==d2)
    {
        printf("%d %d",n1,n2);
    }
    else
    {
        printf("%d",n1);
    }
}