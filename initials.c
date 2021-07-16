#include <stdio.h>
#include <stdlib.h>
initials(char a[50])
{
	int i=0,k=0;
	char b[20];
	printf("Abbreviated form: ");
	while(a[i]!='\0')
	{
		if(a[i]!=' ')
		b[k++]=a[i];
		else
		{
			b[k]='\0';
			if(b[0]!='\0')
			{
				printf("%c. ", b[0]);
			}
			k=0;
		}
		i++;
	}
	b[k]='\0';
	printf("%s", b);
}
main()
{
	printf("Enter a name\n");
	char a[50];
	gets(a);
	initials(a);
}
