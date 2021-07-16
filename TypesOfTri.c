#include<stdio.h>
int isos(int a,int b,int c)
{
	if(a==b || b==c || c==a)
	return 1;
	else
	return 0;
}
int right(int a,int b,int c)
{
	int max, srt,ssrt;
	max= a>b?(a>c?a:c):(b>c?b:c);
	srt=max*max;
	if(a==max)
	ssrt=b*b+c*c;
	else if(b==max)
	ssrt=a*a+c*c;
	else
	ssrt=b*b+a*a;
	if(srt==ssrt)
	return 1;
	else
	return 0;
}
main()
{ 
	int a,b,c;
	printf("Enter 3 sides of a triangle");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if(a>0 && c>0 && b>0)
	{
		int k=right(a,b,c);
		int f=isos(a,b,c);
		if(a==b && b==c)
		printf("\nEquilateral triangle");
		else if(k==1 && f==1)
		printf("\nIsosceles Right angled triangle");
		else if(f==1)
		printf("\nIsosceles triangle");
		else if(k==1)
		printf("\nRight angled triangle");
		else
		printf("\nScalene triangle");
	}
	else
	printf("Wrong input");
}
