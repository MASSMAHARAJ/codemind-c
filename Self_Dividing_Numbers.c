#include<stdio.h>
int main()
{
    int n1,n2,n,d,i,fc,dc;
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        if(i%10!=0)
        {
        n=i;
        dc=0;
        fc=0;
        while(n>0)
        {
            d=n%10;
            dc++;
            if(i%d==0)
            {
                fc++;
            }
            n=n/10;
        }
        if(fc==dc)
        {
            printf("%d ",i);
        }
        }
    }
}
