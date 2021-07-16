#include<stdio.h>
frequency(int A[],int r)
{
	int temp,i,j;
	for(i=0;i<r-1;i++)
	{
		for(j=0;j<r-1-i;j++)
		{
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	int p=0,q,s;
	while(p<r)
	{
		q=A[p];
		s=0;
		while(A[p]==q)
		{
			s++;
			p++;
		}
		printf("%d is found %d times", q,s);
		printf("\n");
	}
}
main()
{
	int n,i;
	printf("Enter the no. of array elements");
	scanf("%d", & n);
	if(n>0)
	{
		int a[n];
		printf("Enter the array elements");
		for(i=0; i<n; i++)
		scanf("%d", & a[i]);
		frequency(a,n);
	}
	else
	printf("Wrong Input");
}
