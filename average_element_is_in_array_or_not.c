#include<stdio.h>
int main()
{
    int n,a[100],i,avg=0,stop=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        avg=avg+a[i];
    }
    avg=avg/n;
    for(i=0;i<n;i++)
    {
        if(a[i]==avg)
        {
            printf("True");
            stop=1;
            break;
        }
    }
    if(stop==0)
    {
        printf("False");
    }
}