#include<stdio.h>
int main()
{
    	int sum=0,i,j,n,m,a[10][10];
    	scanf("%d%d",&n,&m);
    	for(i=1;i<=n;i++)
    	{
        	for(j=1;j<=m;j++)
        	{
            	scanf("%d",&a[i][j]);
        	}
    	}
    		for(i=1;i<=n;i++)
    		{
        		for(j=1;j<=m;j++)
      		{
            		if(i!=1 && j!=1 && i!=n && j!=m)
            		{
                			sum=sum+a[i][j];
            		}
        		}
    		}	   
	printf("%d",sum);
}

