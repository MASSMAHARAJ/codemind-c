#include<stdio.h>
int main()
{
    int n,d,i,c1=0,c2=0;
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        c1++;
        if(n%i==0)
        {
            printf("Not Mega Prime");
            break;
        }
        c2++;
    }
    if(c1==c2)
    {
        c1=0;
        c2=0;
        while(n)
        {
            c1++;
            d=n%10;
            n=n/10;
            if(d!=2 && d!=3 && d!=5 && d!=7)
            {
                printf("Not Mega Prime");
                break;
            }
            c2++;
        }
        if(c1==c2)
        {
            printf("Mega Prime");
        }
    }
}