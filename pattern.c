#include<stdio.h>
main()
{
	int n,i,j,l;
	printf("Enter the number of terms");
	scanf("%d", &n);
	printf("\n");
	if(n>0)
	{
		l=2*n-1;
		for(i=n;i>=1;i--)
		{
			for(j=1;j<=l;j++)
			{
				if(j>(i-1) && j<(l-i+2))
				printf("*\t");
				else
				printf(" \t");
			}
			printf("\n");
		}
	}
	else
	printf("Wrong input");
}
