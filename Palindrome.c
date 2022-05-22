#include<stdio.h>
#include<math.h>
int main()
{
    int n,alt,d,k=0;
    scanf("%d",&n);
    alt=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        k=k*10+d;
    }
    if(k==alt)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}