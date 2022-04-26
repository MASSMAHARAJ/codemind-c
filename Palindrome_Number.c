#include<stdio.h>
int main()
{
    int t,n,alt,d,N,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        alt=n;
        N=0;
        while(n)
        {
            d=n%10;
            n=n/10;
            N=N*10+d;
        }
        if(alt==N)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
        printf("
");
    }
}