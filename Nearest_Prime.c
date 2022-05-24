#include<stdio.h>
int isprime(int n)
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
    int t,i,n,n1,n2,d1,d2;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        n1=n;
        n2=n;
        while(isprime(n1)!=1)
        {
            n1--;
        }
        d1=n-n1;
        while(isprime(n2)!=1)
        {
            n2++;
        }
        d2=n2-n;
        if(d1<=d2)
        {
            printf("%d
",n1);
        }
        else
        {
            printf("%d
",n2);
        }
    }
}