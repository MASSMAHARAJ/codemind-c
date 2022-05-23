#include<stdio.h>
int main()
{
     int alt,n,r=0,d;
     scanf("%d",&n);
     alt=n;
     while(n)
     {
         d=n%10;
         n=n/10;
         r=r*10+d;
     }
     if(alt==r)
     {
         printf("True");
     }
     else
     {
         printf("False");
     }
}