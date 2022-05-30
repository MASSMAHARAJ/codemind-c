#include<stdio.h>
int isprime(int n)
{
    int j;
    for(j=2;j<n;j++)
    {
        if(n%j==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a,b,i,max,min;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        if(isprime(i))
        {
            printf("%d
",i);
        }
    }
}