#include<stdio.h>
int main()
{
    int i,n,m,min;
    scanf("%d%d",&n,&m);
    if(n<m)
    {
        min=n;
    }
    else
    {
        min=m;
    }
    while(min)
    {
        if(n%min==0 && m%min==0)
        {
            printf("%d",min);
            break;
        }
        else
        {
            min--;    
        }
    }
}