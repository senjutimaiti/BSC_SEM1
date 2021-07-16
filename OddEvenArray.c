#include<stdio.h>
#include<stdlib.h>
main()
{
	int i;
	int a[10];
	printf("Enter 10 array elements");
	for(i=0; i<10; i++)
	scanf("%d", & a[i]);
	printf("\nthe even numbers\n");
	for(i=0; i<10;i++)
	{
		if(a[i]%2==0)
		printf("%d\t", a[i]);
	}
	printf("\nthe odd numbers\n");
	for(i=0; i<10;i++)
	{
		if(a[i]%2!=0)
		printf("%d\t", a[i]);
	}
}
