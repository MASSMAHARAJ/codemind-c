#include<stdio.h>
int main()
{
    int n,m,mv,p1=0,p2=0;
    scanf("%d%d",&n,&m);
    if(n%2==0 || m%2==0)
    {
        p1++;
    }
    else
    {
        p2++;
    }
    if(p1>p2)
    {
        printf("Player 1");
    }
    else
    {
        printf("Player 2");
    }
}