#include<stdio.h>
#include<math.h>
armstrong(int a)//function to check if the number is armstrong
{
	int r=a;
	int s=a;
	int d=0,di=0,sum=0;
	while(a>0)
	{
		d++;
		a=a/10;
	}
	while(s>0)
	{
		di=s%10;
		sum=sum+pow(di,d);
		s=s/10;
	}
	if(r==sum)
	printf("the number is armstrong");
	else
	printf("the number is not armstrong");
}
krishnamurthy(int a)//function to check if the number is krishnamurthy
{
	int r=a,d=0,f,i,sum=0;
	while (a>0)
	{
		f=1;
		d=a%10;
		for(i=1;i<=d;i++)
		f=f*i;
		sum=sum+f;
		a=a/10;
	}
	if(r==sum)
	printf("the number is krishnamurthy");
	else
	printf("the number is not krishnamurthy");
}
automorphic(int a)//function to check if the number is automorphic
{
	int d=0,n=a;
	while(a>0)
	{
		d++;
		a=a/10;
	}
	int pro=n*n;
	int k=pro,sum=0,di,dig,rev=0;
	while(d>0)
	{
		di=k%10;
		sum=sum*10+di;
		k=k/10;
		d--;
	}
	while(sum>0)
	{
		dig=sum%10;
		rev=rev*10+dig;
		sum=sum/10;
	}
	if(rev==n)
	printf("the number is automorphic");
	else
	printf("the number is not automorphic");
}
main()
{
	int n,num,f;
	printf("Enter a number");
	scanf("%d", & n);
	do
	{
		printf("Enter: \n 1 to check a number is armstrong or not \n 2 to check a number is krishmurthy or not  \n 3 to check a number is automorphic or not ");
		scanf("%d", & num);
		switch(num)
		{
			case 1: armstrong(n);
				break;
			case 2: krishnamurthy(n);
				break;
			case 3: automorphic(n);
				break;
			default: printf("Wrong choice");
		}
		printf("\nEnter 1 to continue and any other no. to exit");
		scanf("%d", & f);
	}
	while(f==1);
}
