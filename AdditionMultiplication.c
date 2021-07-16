#include <stdio.h>
void addition(int m,int n, int a[m][n],int b[m][n])
{
	printf("The sum\n");
	int c[m][n];
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
}
void multiply(int m,int n,int m1, int n1, int a[m][n],int b[m1][n1])
{
	printf("The product\n");
	int c[m][n1];
	int i,j,h,sum=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n1;j++)
		{
			for(h=0;h<m1;h++)
			{
				sum=sum+a[i][h]*b[h][j];
			}
			c[i][j]=sum;
			sum=0;
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
}
main()
{
	int m,n,m1,n1,i,j;
	printf("Enter the order of the first array");
	scanf("%d", &m);
	scanf("%d", &n);
	printf("Enter the order of the second array");
	scanf("%d", &m1);
	scanf("%d", &n1);
	if (m>0 && n>0 && m1>0 && n1>0)
	{
		int a[m][n];
		int b[m1][n1];
		printf("Enter the elements of first array");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d", &a[i][j]);
			}
		}
		printf("Enter the elements of second array");
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				scanf("%d", &b[i][j]);
			}
		}
		if(m1==m && n1==n)
		addition(m,n,a,b);
		else
		printf("addition isn't possible");
		printf("\n");
		if(n==m1)
		multiply(m,n,m1,n1,a,b);
		else
		printf("multiplication isn't possible");
	}
	else
	printf("Wrong Input");
}
