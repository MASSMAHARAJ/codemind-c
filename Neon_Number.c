#include<stdio.h>
#include<math.h>
int main()
{
    int n,alt,d,s=0;
    scanf("%d",&n);
    alt=pow(n,2);
    while(alt)
    {
        d=alt%10;
        alt=alt/10;
        s=s+d;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    
}