//Abundant Number:the number which is less than the sum of its factors.
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum+1>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}