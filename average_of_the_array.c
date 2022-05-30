#include<stdio.h>
int main()
{
    int n,a[100],i;
    float avg=0;
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
    printf("%.2f",avg);
}