#include <stdio.h>
#include <stdlib.h>
struct distance
{
	int km;
	int m;
};
void sumof(struct distance d1,struct distance d2)
{
	int n;
	struct distance sum;
	sum.km=d1.km+d2.km;
	sum.m=d1.m+d2.m;
	if(sum.m>=1000)
	{
		n=sum.m/1000;
		sum.m=sum.m-(n*1000);
		sum.km=sum.km+n;
	}
	printf("The sum = %d km %d m\n", sum.km,sum.m);
}
void diffof(struct distance d1,struct distance d2)
{
	int n;
	struct distance diff;
	d1.m=d1.km*1000+d1.m;
	d2.m=d2.km*1000+d2.m;
	diff.m=d1.m-d2.m;
	if(diff.m<0)
	{
		diff.m*=-1;
	}
	if(diff.m>=1000)
	{
		diff.km=diff.m/1000;
		diff.m=diff.m-(diff.km*1000);
	}
	printf("The diff = %d km %d m\n", diff.km,diff.m);
}
main()
{
	struct distance d1,d2;
	printf("Enter the 1st distance in km and m respectively\n");
	scanf("%d", &d1.km);
	fflush(stdin);
	scanf("%d", &d1.m);
	printf("Enter the 2nd distance in km and m respectively\n");
	scanf("%d", &d2.km);
	fflush(stdin);
	scanf("%d", &d2.m);
	if(d1.km>=0 && d2.km>=0 && d1.m>=0 && d2.m>=0)
	{
		sumof(d1,d2);
		diffof(d1,d2);
	}
	else
	printf("Wrong Input");
}
