#include<stdio.h>
int main()
{
    int num,n=0,d,dc=0;
    scanf("%d",&num);//1234
    while(dc!=1)//2
    {
        n=num;//n=1
        num=0;//0
        dc=0;
        while(n)
        {
            d=n%10;//d=1
            dc++;//1
            n=n/10;//0
            num=num+d;//num=0
        }
    }
    printf("%d",num);
}