#include <stdio.h>
#include <stdlib.h>
void perfect(int n)
{
	int sum=0,i;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("The number is a perfect number\n");
		printf("The factors of the number\n");
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			{
				printf("%d ", i);
			}
		}
	}
	else
	{
		printf("The number is not a perfect number");
	}
}
void main()
{
	int n,f;
	do
	{
		printf("Enter a number");
		scanf("%d", &n);
		if(n>0)
		{
			perfect(n);
		}
		else
		{
			printf("Wrong Input");
		}
		printf("\nEnter 1 to continue and press any other key to exit");
		scanf("%d", &f);
	}
	while(f==1);
}
