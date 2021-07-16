#include<stdio.h>
#include<stdlib.h>
void convert(char c)
{
	int n=c;
	if(n>=97 && n<=122)
	{
		n=n-32;
		c=(char)n;
		printf("output: %c", c);
	}
	else if(n>=65 && n<=90)
	printf("The input is already in upper case");
	else
	printf("Wrong input");
}
main()
{
	int g;
	do
	{
		char c;
		printf("Enter an alphabet in lower case\n");
		fflush(stdin);
		scanf("%c", & c);
		convert(c);
		printf("\nEnter 1 to continue or press any other key to exit");
		scanf("%d", &g);
	}
	while(g==1);
}
