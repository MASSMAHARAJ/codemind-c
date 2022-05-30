#include<stdio.h>
int main()
{
    int n,a[100],i,se,stop=0;
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