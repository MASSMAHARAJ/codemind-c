#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,c1=0,c2=0;
    scanf("%d",&n);
    a=sqrt(n);
    if(a*a+1==n)
    {
        printf("NO");
    }
    else
    {
    	printf("YES");
    }
}