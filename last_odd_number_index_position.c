#include<stdio.h>
int main()
{
    int n,i,a[10],ind;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i!=0;i--)
    {
        if(a[i]%2!=0)
        {
            printf("%d",i);
            break;
        }
    }
}