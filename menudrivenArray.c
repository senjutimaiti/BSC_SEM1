#include <stdio.h>
transpose(int m,int n,int a[m][n])
{
	printf("Transpose of the array\n");
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t", a[j][i]);
		}
		printf("\n");
	}
}
principlediagonal(int m,int n,int a[m][n])
{
	if(m==n)
	{
		printf("Principle diagonal");
		printf("\n");
		int i,j;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==j)
				printf("%d\t", a[i][j]);
				else
				printf("\t");
			}
			printf("\n");
		}
	}
	else
	printf("diagonals don't exist");
}
npdiagonal(int m,int n,int a[m][n])
{
	if(m==n)
	{
		printf("Non-Principle diagonal\n");
		int i,j;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if((i+j)==(m-1))
				printf("%d\t", a[i][j]);
				else
				printf("\t");
			}
			printf("\n");
		}
	}
	else
	printf("diagonals don't exist");
}
boundary(int m,int n,int a[m][n])
{
	printf("boundary elements of the array\n");
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||j==0||i==(m-1)||j==(n-1))
			printf("%d\t", a[i][j]);
			else
			printf("\t");
		}
		printf("\n");
	}
}
main()
{
	int m,n,i,j,f;
	printf("Enter the order of the array");
	scanf("%d", &m);
	scanf("%d", &n);
	if(m>0 && n>0)
	{
		int a[m][n];
		printf("Enter the elements of the array");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d", &a[i][j]);
			}
		}
		printf("\nthe array\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t", a[i][j]);
			}
			printf("\n");
		}
		do
		{
			int num;
			printf("Enter your choice:\n1. Transpose\n2. Principle diagonal\n3. Nom-Principle diagonal\n4. boundary elements\n");
			scanf("%d", &num);
			switch(num)
			{
				case 1:transpose(m,n,a);
					break;
				case 2:principlediagonal(m,n,a);
					break;
				case 3:npdiagonal(m,n,a);
					break;
				case 4:boundary(m,n,a);
					break;
				default: printf("Wrong choice");
			}
			printf("\nEnter 1 to continue or any other digit to exit");
			scanf("%d", & f);
		}
		while(f==1);
	}
	else
	printf("Wrong Input");
}
