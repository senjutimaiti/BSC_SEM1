#include <stdio.h>
#include <stdlib.h>
void gcd(a,b)
{
	int n,i,c;
	if(a>b)
	n=b;
	else
	n=a;
	for(i=1;i<=n;i++)
	{
		if(a%i==0 && b%i==0)
		c=i;
	}
	printf("The GCD: %d\n",c);
}
void lcm(a,b)
{
	int n,i,c,k;
	k=a*b;
	if(a>b)
	n=b;
	else
	n=a;
	for(i=1;i<=n;i++)
	{
		if(a%i==0 && b%i==0)
		c=i;
	}
	printf("The LCM: %d\n",(k/c));
}
void main()
{
	int a,b,n,f;
	do
	{
		printf("Enter 2 numbers: ");
		scanf("%d", &a);
		scanf("%d", &b);
		if(a>0 && b>0)
		{
			printf("Enter:\n1. To find GCD\n2. To find LCM\n");
			scanf("%d", &n);
			switch(n)
			{
				case 1: gcd(a,b);
				break;
				case 2: lcm(a,b);
				break;
				default : printf("Wrong Choice\n");
			}
		}
		else
		printf("Wrong Input\n");
		printf("Enter 1 to continue ");
		scanf("%d", &f);
	}
	while(f==1);
}
