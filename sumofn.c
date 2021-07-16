#include<stdio.h>
#include<malloc.h>
main()
{
	int *p,sum=0;
	int s;
	while(1)
	{
		p=(int*)malloc(sizeof(int)*1);
		printf("Enter a number ");
		scanf("%d", p);
		sum=sum+ *p;
		printf("Enter 1 to continue and 0 to break ");
		scanf("%d", &s);
		if(s==0)
		break;
	}
	printf("\nThe sum = %d", sum);
}
