#include<stdio.h>
int checkPrime(int m)
{
	int i,f=0;
	for(i=1;i<=m;i++)
	{
		if(m%i==0)
		f++;
	}
	if(f==2)
	return 1;
	else
	return 0;
}
main()
{
	int i,l,u;
	printf("Enter the lower limit");
	scanf("%d", & l);
	printf("Enter the upper limit");
	scanf("%d", & u);
	if(l<u && l>0)
	{
		for(i=l+1; i<u; i++)
		{
			int k=checkPrime(i);
			if(k==1)
			printf("%d\t", i);
		}
	}
	else
	printf("Wrong input");
}
