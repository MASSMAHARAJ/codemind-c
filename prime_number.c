#include<stdio.h>
int main()
{
    int i,n,fc=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            fc++;
            printf("not a prime");
            break;
        }
    }
    if(fc==0)
    {
        printf("prime");
    }
}