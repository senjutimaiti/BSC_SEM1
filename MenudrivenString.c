#include <stdio.h>
#include <stdlib.h>
showadd(char *a)
{
	while(*a!='\0')
	{
		printf("Address of %c = %d\n", *a,a);
		a++;
	}
}
strlength(char *a)
{
	int c=0;
	while(*a!='\0')
	{
		c++;
		a++;
	}
	printf("Length of the String = %d",c);
}
lowertoUpper(char *p)
{
	int c=0;
	char a[100];
	while(*p!='\0')
	{
		a[c++]=*p;
		p++;
	}
	a[c]='\0';
	int k,i=0;
	while(a[i]!='\0')
	{
		k=a[i];
		if(k>=97 && k<=122)
		k=k-32;
		a[i]=(char)k;
		i++;	
	}
	printf("After converting all lower case characters to upper case\n");
	puts(a);
}
specialcharacters(char a[100])
{
	int k,i=0,c=0;
	while(a[i]!='\0')
	{
		k=a[i];
		if((k>=97 && k<=122)||(k>=65 && k<=90)||(k>=48 && k<=57)||k==32)
		i++;
		else
		{
			c++;
			i++;
		}	
	}
	printf("The number of special characters = %d", c);
}
concatenate(char *a)
{
	int i=0;
	char b[100];
	printf("Enter another string to concatenate\n");
	fflush(stdin);
	gets(b);
	char g[200];
	int c=0;
	while(*a!='\0')
	{
		g[c++]=*a;
		a++;
	}
	while(b[i]!='\0')
	{
		g[c++]=b[i];
		i++;
	}
	g[c]='\0';
	printf("After merging\n");
	puts(g);
}
compare(char *a)
{
	char b[100];
	printf("Enter another string to compare\n");
	fflush(stdin);
	gets(b);
	int c=0,i=0;
	while(*a!='\0')
	{
		if(b[c++]!=*a)
		i++;
		a++;
	}
	if(i==0)
	printf("The strings are equal");
	else
	printf("The strings are not equal");
}
main()
{
	int n,i,f,num;
	char a[100];
	printf("Enter a String\n");
	gets(a);
	do
	{
		printf("\nEnter:\n1 to show address of each character\n2 to calculate length of string\n3 to convert all lower case characters to upper case\n");
		printf("4 to count the number of special characters\n5 to concatenate with another string\n6 to compare 2 Strings");
		scanf("%d", &num);
		switch(num)
		{
			case 1: showadd(a);
			break;
			case 2: strlength(a);
			break;
			case 3: lowertoUpper(a);
			break;
			case 4: specialcharacters(a);
			break;
			case 5: concatenate(a);
			break;
			case 6: compare(a);
			break;
			default: printf("Wrong Input");
		}
		printf("\nEnter 1 to continue and any other element to delete");
		scanf("%d", &f);
	}
	while(f==1);
}
