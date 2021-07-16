#include<stdio.h>
main()
{
	int num,n,d,sum=0,pro=1;
	printf("Enter a number");
	scanf("%d", & num);
	if(num<0)
	n=num*-1;
	else if(num==0)
	{
		pro=0;
		n=num;
	}
	else
	n=num;
	while(n!=0)
	{
		d=n%10;
		sum=sum+d;
		pro=pro*d;
		n=n/10;
	}
	printf("the sum of the digits of %d = %d", num,sum );
	printf("\nthe product of the digits of %d = %d", num,pro);
}
