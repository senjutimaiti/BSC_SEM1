#include<stdio.h>
maximum(int A[],int r)//function to find the maximum number
{
	int i,max=A[0];//assuming first element as the maximum number
	for(i=1; i<r;i++)
	{
		if(A[i]>max)
		max=A[i];
	}
	printf("%d is the max", max);
}
minimum(int A[],int r) //function to find the minimum number
{
	int i,min=A[0]; //assuming first element as the minimum number
	for(i=1; i<r;i++)
	{
		if(A[i]<min)
		min=A[i];
	}
	printf("%d is the min", min);
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
		maximum(a,n);
		printf("\n");
		minimum(a,n);
	}
	else
	printf("Wrong Input");
}

