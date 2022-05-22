#include<stdio.h>
int main()
{
    int n,d,ld=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        if(d>ld)
        {
            ld=d;
        }
    }
    printf("%d",ld);
}