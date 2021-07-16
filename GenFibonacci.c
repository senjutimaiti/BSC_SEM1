#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,n, a=0, b=1,c=0;
	printf("Enter the no. of terms");
	scanf("%d", & n);
	if(n>0)
	{
		for(i=1; i<=n; i++)
		{
			printf("%d\t", c);
			a=b;
			b=c;
			c=a+b;
		}
	}
	else
	printf("Wrong input");
}
