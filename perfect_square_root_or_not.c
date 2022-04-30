#include<stdio.h>
#include<math.h>
int main()
{
    int n,a;
    float b;
    scanf("%d",&n);
    a=sqrt(n);
    b=sqrt(n);
    if(a==b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}