#include<stdio.h>
int main()
{
    int n,i,a[10],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n-1;i++)
    {
        if((a[i-1]%2+a[i+1]%2)==1)
        {
            c++;
        }
    }
    if((a[0]%2+a[n-2]%2)==1)
    {
        c=c+1;
    }
    if((a[1]%2+a[n-1]%2)==1)
    {
        c=c+1;
    }
    printf("%d",c);
}