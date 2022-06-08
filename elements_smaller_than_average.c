#include<stdio.h>
int main()
{
    int n,a[10],sum=0,avg,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]<=avg)
        {
            c++;
        }
    }
    printf("%d",c);
}