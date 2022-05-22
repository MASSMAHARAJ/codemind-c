#include<stdio.h>
int main()
{
    int min,a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        min=b;
    }
    else
    {
        min=a;
    }
    while(a%min!=0 || b%min!=0)
    {
        min--;
    }
    printf("%d",min);
}