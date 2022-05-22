#include<stdio.h>
int main()
{
    int n,l,i=1;
    scanf("%d%d",&n,&l);
    while(i<=l)
    {
        if(i%2!=0)
        {
            printf("%d ",n);
            printf("x ");
            printf("%d ",i);
            printf("= ");
            printf("%d
",n*i);
        }
        i++;
    }
}