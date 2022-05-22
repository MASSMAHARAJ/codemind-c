#include<stdio.h>
int main()
{
    int n1,n2,i,sum=0;
    scanf("%d",&n1);
    scanf("%d",&n2);
    for(i=1;i<=n1/2;i++)
    {
        if(n1%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n2)
    {
        sum=0;
        for(i=1;i<=n2/2;i++)
        {
            if(n2%i==0)
            {
                sum=sum+i;
            }
        }   
        if(sum==n1)
        {
            printf("Amicable");
        }
        else
        {
            printf("Not Amicable");
        }
    }
    else
    {
        printf("Not Amicable");
    }
}