#include <stdio.h>
#include <stdlib.h>
struct date
{
	int d;
	int m;
	int y;
};
void duration(struct date d1,struct date d2)
{
	int a1[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int a2[]={31,29,31,30,31,30,31,31,30,31,30,31};
	int a,b,c,i=0;
	a=d2.y-d1.y;
	b=d2.m-d1.m;
	c=d2.d-d1.d;
	if(b<0)
	{
		a=a-1;
		b=12+b;
	}
	if(c<0)
	{
		b=b-1;
		if(d2.y%4!=0)
		c=a1[d2.m-2]+c;
		else
		c=a2[d2.m-2]+c;
	}
	printf("%d years %d months and %d days", a,b,c);
}
void main()
{
	struct date d1,d2;
	int i=0,f=0,g=0;
	int a1[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int a2[]={31,29,31,30,31,30,31,31,30,31,30,31};
	char D1[12],D2[12];
	printf("Enter two dates respectively\n");
	gets(D1);
	fflush(stdin);
	gets(D2);
	d1.d=atoi(&D1[0]);
	d1.m=atoi(&D1[3]);
	d1.y=atoi(&D1[6]);
	d2.d=atoi(&D2[0]);
	d2.m=atoi(&D2[3]);
	d2.y=atoi(&D2[6]);
	if(d1.m>=1 && d1.m<=12 && d2.m>=1 && d2.m<=12)
	{
		if(d1.y%4==0)
		{
			if(d1.d>a2[d1.m-1])
			{
				f++;
			}
		}
		else
		{
			if(d1.d>a1[d1.m-1])
			{
				f++;
			}
		}
		if(d2.y%4==0)
		{
			if(d2.d>a2[d2.m-1])
			{
				g++;
			}
		}
		else
		{
			if(d2.d>a1[d2.m-1])
			{
				g++;
			}
		}
		if(g==1 || f==1)
		{
			printf("Invalid Input");
		}
		else
		{
			if(d2.y<d1.y)
			duration(d2,d1);
			else if(d2.y==d1.y && d2.m<d1.m)
			duration(d2,d1);
			else if(d2.y==d1.y && d2.m==d1.m && d2.d<d1.d)
			duration(d2,d1);
			else
			duration(d1,d2);
		}
	}
	else
	{
		printf("Invalid Input");
	}
}
