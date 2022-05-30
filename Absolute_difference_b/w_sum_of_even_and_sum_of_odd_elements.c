#include<stdio.h>
int main()
{
    int n,a[100],i,r=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            r=r-a[i];
        }
        else
        {
            r=r+a[i];
        }
    }
    if(r<0)
    {
        r=r*-1;
    }
    printf("%d",r);
}