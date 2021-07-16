#include <stdio.h>
#include <stdlib.h>
struct complex
{
	int r;
	int i;
};
void sumof(struct complex a,struct complex b)
{
	struct complex sum;
	sum.r=a.r+b.r;
	sum.i=a.i+b.i;
	printf("The sum of the complex numbers= %d+(%d)i\n", sum.r,sum.i);
}
void diffof(struct complex a,struct complex b)
{
	struct complex diff;
	if(a.r>b.r)
	{
		diff.r=a.r-b.r;
		diff.i=a.i-b.i;
	}
	else if(a.r<b.r)
	{
		diff.r=b.r-a.r;
		diff.i=b.i-a.i;
	}
	else if(a.i>b.i)
	{
		diff.r=0;
		diff.i=a.i-b.i;
	}
	else if(a.i<b.i)
	{
		diff.r=0;
		diff.i=b.i-a.i;
	}
	else
	{
		diff.r=0;
		diff.i=0;
	}
	printf("The diff of the complex numbers= %d+(%d)i\n", diff.r,diff.i);
}
void multi(struct complex a,struct complex b)
{
	struct complex pro;
	pro.r=(a.r*b.r)-(a.i*b.i);
	pro.i=(a.r*b.i)+(b.r*a.i);
	printf("The product of the complex numbers= %d+(%d)i\n", pro.r,pro.i);
}
main()
{
	int n,i,j;
	struct complex a,b;
	printf("Enter the real and imaginary part of 1st complex number respectively\n");
	scanf("%d", &a.r);
	fflush(stdin);
	scanf("%d", &a.i);
	printf("Enter the real and imaginary part of 2nd complex number respectively\n");
	scanf("%d", &b.r);
	fflush(stdin);
	scanf("%d", &b.i);
	sumof(a,b);
	diffof(a,b);
	multi(a,b);
}
