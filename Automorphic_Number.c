#include<stdio.h>
#include<math.h>
int main()
{
    int n,n2,dc=0,k,alt;
    scanf("%d",&n);
    alt=n;
    n2=pow(n,2);
    n2=n2-n;
    while(n)
    {
        n=n/10;
        dc++;
    }
    k=pow(10,dc);
    if(n2%k==0)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}