#include <stdio.h>
#include <stdlib.h>
void main(int argc, char * argv[])
{
	int n=atoi(argv[1]);
	int i=0;
	if(n<=0)
	{
		printf("Invalid Input");
	}
	else
	{
		while(*argv[1]!='\0')
		{
			argv[1]++;
			i++;
		}
		argv[1]--;
		printf("The number in reverse order ");
		while(i!=0)
		{
			printf("%c", *argv[1]);
			argv[1]--;
			i--;
		}
	}
}
