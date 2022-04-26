#include<stdio.h>
int main()
{
    int n,c[100],ec,i,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    scanf("%d",&ec);
    for(i=0;i<n;i++)
    {
        if(c[i]>max)
        {
            max=c[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(c[i]+ec>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}