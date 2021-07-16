#include <stdio.h>
#include <stdlib.h>
#include<string.h>
main(int argc, char * argv[])
{
	printf("File name %s\n", argv[0]);
	printf("1st string %s\n", argv[1]);
	printf("2nd string %s\n", argv[2]);
	int c=0,i=0;
	char a[500],b[500];
	strcpy(a,argv[1]);
	strcpy(b,argv[2]);
	while(a[i]!='\0' || b[i]!='\0')
	{
		if(b[i]!=a[i])
		c++;
		i++;
	}
	if(c==0)
	printf("The strings are equal");
	else
	printf("The strings are not equal");
}	
