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
        if(i%2==0)
        {
            r=r+a[i];
        }
    }
    printf("%d",r);
}