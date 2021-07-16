#include <stdio.h>
#include <stdlib.h>
void display(int n, int a[n])
{
	int i,j;
	for(i=0;i<n;i++)
	printf("%d\t", a[i]);
	printf("\n");
}
void bubsort(int n, int *k)
{
	int a[n];
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		a[i]=*k;
		k++;
	}
	for(i=0;i<n-1;i++)
	{
		printf("Pass %d\n", (i+1));
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			display(n,a);
		}	
	}
	printf("Sorted array\n");
	display(n,a);
}
void selsort(int n, int *k)
{
	int i,j,temp,min;
	int a[n];
	for(i=0;i<n;i++)
	{
		a[i]=*k;
		k++;
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			min=j;
		}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
	printf("Sorted array\n");
	display(n,a);
}
void inssort(int n, int *k)
{
	int i,j,temp;
	int a[n];
	for(i=0;i<n;i++)
	{
		a[i]=*k;
		k++;
	}
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while((temp<a[j])&&(j>=0))
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	printf("Sorted array\n");
	display(n,a);
}
main()
{
	int n,i,f,num;
	printf("Enter the number of elements ");
	scanf("%d", &n);
	if(n>0)
	{
		int a[n];
		printf("Enter the elements ");
		for(i=0;i<n;i++)
		scanf("%d", &a[i]);	
		do
		{
			printf("\nEnter:\n1 to bubble sort\n2 to selection sort\n3 to insertion sort\n");
			scanf("%d", &num);
			switch(num)
			{
				case 1: bubsort(n,a);
				break;
				case 2: selsort(n,a);
				break;
				case 3: inssort(n,a);
				break;
				default: printf("Wrong Choice");
			}
			printf("\nEnter 1 to continue");
			scanf("%d", &f);
		}
		while(f==1);
	}
	else
	printf("Wrong Input");
}
