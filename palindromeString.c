#include <stdio.h>
#include <stdlib.h>
void check(char a[50])
{
	char b[50],c[50];
	int i=0,j,f=0;
	while(a[i]!='\0')
	{
		i++;
	}
	int k=0;
	for(j=0;j<i;j++)
	{
		if(a[j]!=' ')
		c[k++]=a[j];
	}
	c[k]='\0';
	k=0;
	for(j=i-1;j>=0;j--)
	{
		if(a[j]!=' ')
		b[k++]=a[j];
	}
	b[k]='\0';
	k=0;
	while(c[k]!='\0')
	{
		if(c[k]!=b[k])
		f++;
		k++;
	}
	if(f==0)
	printf("palindrome");
	else 
	printf("not palindrome");
}
main()
{
	printf("Enter a string\n");
	char a[50];
	gets(a);
	check(a);
}
