#include<stdio.h>
#include<stdlib.h>
VowSpace(char a[100])
{
	int i=0,v=0,s=0;
	while(a[i]!='\0')
	{
		if(a[i]==' ')
		s++;
		if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		v++;
		i++;	
	}
	printf("The number of spaces = %d\n", s);
	printf("The number of vowels = %d", v);
}
main()
{
	printf("Enter a String\n");
	char a[50];
	gets(a);
	VowSpace(a);
}
