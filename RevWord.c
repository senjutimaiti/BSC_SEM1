#include <stdio.h>
#include <stdlib.h>
void rev(char b[50])
{
	char c[50];
	int j,f=0;
	while(b[f]!='\0')
	{
		f++;
	}
	int p=0;
	for(j=f-1;j>=0;j--)
	{
		c[p++]=b[j];
	}
	c[p]='\0';
	printf("%s ", c);
}
main()
{
	printf("Enter a string\n");
	char a[50];
	gets(a);
	int i=0,k=0,m=0;
	char b[50];
	while(a[i]!='\0')
	{
		i++;
	}
	while(m<=i)
	{
		if(a[m]!=' ' && a[m]!='\0')
		b[k++]=a[m];
		else
		{
			b[k]='\0';
			rev(b);
			k=0;
		}
		m++;
	}
}
