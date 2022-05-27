#include<stdio.h>
int isprime(int n)
{
    	int i;
    	if(n==1)
    	{
    	   	return 0;
    	}
    	else
    	{
	    	for(i=2;i<n/2;i++)
	    	{
	        	if(n%i==0)
	        	{
	            	return 0;
	        	}
	    	}
	    	return 1;
    	}
}
int main()
{
	int n,i,j,c1=0,c2=0,c=0;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(c==1)
		{
			break;
		}
		if(isprime(i))
		{
			for(j=2;j<=n/2;j++)
			{
				if(isprime(j))
				{
					if(i*j==n && i<=j)
					{
						c1++;
						printf("%d %d ",i,j);		
						break;
						c=1;
						c2++;
					}
				}
			}
		}
	}
	if(c1==c2)
	{
		printf("-1");
	}
}