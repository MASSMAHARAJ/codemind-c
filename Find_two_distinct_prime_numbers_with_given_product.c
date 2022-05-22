#include<stdio.h>
int ifprime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int i,n,k,c1=0,c2=0;
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        c1++;
        if(ifprime(i))
        {
            k=n/i;
            if(ifprime(k))
            {
                if(i*k==n)
                {
                    printf("%d %d",i,k);
                    break;
                }
            }
        }
        c2++;
    }
    if(c1==c2)
    {
        printf("-1");
    }
}