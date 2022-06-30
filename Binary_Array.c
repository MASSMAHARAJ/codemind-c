#include<stdio.h>
int main()
{
    int n,i,s=0,a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=1 &&a[i]!=0)
        {
            printf("False");
            s=1;
            break;
        }
    }
    if(s==0)
    {
        printf("True");
    }
}