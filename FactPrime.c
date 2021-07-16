#include <stdio.h>
#include <stdlib.h>
main(int argc, char * argv[])
{
	printf("File name %s\n", argv[0]);
	printf("1st argument %s\n", argv[1]);
	int i=atoi(argv[1]);
	if(i>0)
	{
		int j,f=1,c=0;
		for(j=1;j<=i;j++)
		f=f*j;
		printf("factorial of the number %d\n", f);
		for(j=1;j<=i;j++)
		if(i%j==0)
		c++;
		if(c==2)
		printf("The number is prime");
		else
		printf("The number is not prime");
	}
	else if(i==0)
	printf("factorial of the number 1");
	else
	printf("No factorial");
}
