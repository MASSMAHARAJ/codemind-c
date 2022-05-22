#include<stdio.h>
int main()
{
    int stop=0,n,d1,d2,alt1,alt2,rc=0,c=0,dc=0;
    scanf("%d",&n);
    alt1=n;
    alt2=n;
    while(alt1)
    {
        d1=alt1%10;
        alt1=alt1/10;
        dc++;
        rc=0;
        alt2=n;
        while(alt2)
        {
            d2=alt2%10;
            alt2=alt2/10;
            if(d1==d2)
            {
                c++;
            }
        }
    }
    if(c==dc)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}