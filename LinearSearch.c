#include<stdio.h>
int linear(int A[],int r,int s)
{
	int i,f=0;
	for(i=0;i<r;i++)
	{
		if(A[i]==s)
		f++;
	}
	return f;
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
		int no,l;
		do
		{
			printf("Enter the no. to be searched");
			scanf("%d", & no);
			int k=linear(a,n,no);
			if(k>0)
			printf("the no is found %d times", k);
			else
			printf("the no is not found");
			printf("\nEnter 1 to continue and any other digit to exit");
			scanf("%d", & l);
		}
		while(l==1);
	}
	else 
	printf("Wrong Input");
}
