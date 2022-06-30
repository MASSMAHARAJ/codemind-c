#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,s=0,a[10];
    scanf("%d",&n);
    m=n-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i]*pow(2,m);
        m--;
    }
    printf("%d",s);
}