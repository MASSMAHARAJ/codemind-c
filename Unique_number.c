//A num is said to be a unique number if its digits were not repeated 
#include<stdio.h>
#include<math.h>
int main()
{
	int alt,n,i,d=0,d1,d2,k=0;
    	scanf("%d",&n);//1234
    	i=n;
    	while(n)//n=12
	{
    		d1=n%10;//d1=2
		n=n/10; //1
		d++;//3
		alt=i;//1234
		while(alt)//0
	  	{
	  		d2=alt%10;//1
	  		alt=alt/10;//1
			if(d1==d2)// 2==2 
	  		{
	  			k++;//3
			}
	  	}
	}
	if(k==d)
	{
		printf("Unique Number");
	}
	else
	{
		printf("Not Unique Number");
	}
}
