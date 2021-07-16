#include <stdio.h>
#include <stdlib.h>
armstrong(int a)
{
	int n=a,c=0,sum=0,b=a,d,i,f;
	while(a>0)
	{
		c++;
		a=a/10;	
	}
	while(b>0)
	{
		f=1;
		d=b%10;
		for(i=1;i<=c;i++)
		f=f*d;
		sum=sum+f;
		b=b/10;	
	}
	if(n==sum)
	printf("%d\t",n);
}
main()
{
	int l,u,i;
	printf("Enter the lower limit\n");
	scanf("%d", &l);
	printf("Enter the upper limit\n");
	scanf("%d", &u);
	if(l>=0 && l<u)
	{
		printf("The armstrong numbers between the range\n");
		for(i=l+1;i<u;i++)
		{
			armstrong(i);
		}
	}
	else
	printf("Invalid Range");
}
