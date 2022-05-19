#include<stdio.h>
int main()
{
    int n,d,d1=1,d2=1,f1,f2;
    scanf("%d",&n);
    d=1;
    while(d<=n)
    {
        d=d1+d2;
        d1=d2;
        d2=d;
    }
    if(n-d1<d-n)
    {
    	  printf("%d",d1);
    }
    else if(n-d1==d-n)
    {
    	  printf("%d %d",d1,d);
    }
    else
    {
    	   printf("%d",d);
    }
    
}