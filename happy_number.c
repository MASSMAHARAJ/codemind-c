#include<stdio.h>
#include<math.h>
int main()
{
    int n,alt,d,dc=0;;
    scanf("%d",&n);
    while(dc!=1)
    {
        alt=n;
        n=0;
        dc=0;
        while(alt)
        {
            d=alt%10;
            dc++;
            alt=alt/10;
            n=n+pow(d,2);
        }
    }
    if(n==1 || n==7)
    {
    	printf("True");
    }
    else
    {
    	printf("False");
    }
}