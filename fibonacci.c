#include<stdio.h>
int main()
{
    int n,n1,n2,k;
    scanf("%d",&k);
    n1=0;
    n2=1;
    n=n1+n2;
    printf("0 1 ");
    while(k-2!=0)
    {
        printf("%d ",n);
        n1=n2;
        n2=n;
        n=n1+n2;
        k--;
    }
}