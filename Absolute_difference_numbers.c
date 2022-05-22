#include<stdio.h>
#include<math.h>
int main()
{
    int diff,n,alt,temp,d,dc=0,x,f=0,l=0,k;
    scanf("%d%d",&n,&x);
    alt=n;
    temp=x;
    while(n)
    {
        dc++;
        n=n/10;
    }
    n=alt;
    k=pow(10,x);
    f=n%k;
    l=n/pow(10,dc-x);
    diff=f-l;
    if(diff>0)
    {
    	printf("%d",diff);
    }
    else
    {
    	printf("%d",diff*-1);
    }
}