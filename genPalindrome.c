#include<stdio.h>
main()
{
	int l,u,n,d,rev=0,i;
	printf("Enter the range\n");
	scanf("%d", & l);
	scanf("%d", & u);
	if(l<=u)//checking if the lower limit is less than the upper limit
	{
		printf("The palindrome numbers are\n");
		for(i=l; i<=u; i++)//generating palindrome numbers
		{
			n=i;
			rev=0;
			d=0;
			while(n!=0)
			{
				d=n%10;
				rev=rev*10+d;
				n=n/10;
			}
			if(i==rev)//if the original number is equal to its reverse
			printf("%d\t", i);
		}
	}
	else
	printf("Wrong Input");
}
