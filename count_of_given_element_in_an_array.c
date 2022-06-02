#include<stdio.h>
int main()
{
    int i,n,a[100],se,rc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(a[i]==se)
        {
            rc++;
        }
    }
    printf("%d",rc);
}