#include<stdio.h>
int main()
{
    int k,i,n,a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=n/2;
    for(i=0;i<k;i++)
    {
        printf("%d %d ",a[i],a[n-i-1]);
    }
    if(n%2!=0)
    {
        printf("%d 0",a[k]);
    }
}