//Disarium Number:A number is said to be disarium if the sum of the digits raised to the power of their position equal to it.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,alt,d,dc=0,sum=0;
    scanf("%d",&n);
    alt=n;
    while(n)
    {
        dc++;
        d=n%10;
        n=n/10;
    }
    n=alt;
    while(n)
    {
        d=n%10;
        n=n/10;
        sum=sum+pow(d,dc);
        dc--;
    }
    if(sum==alt)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}