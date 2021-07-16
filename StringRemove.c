#include<stdio.h>
#include<stdlib.h>
void rremove(char a[100])
{
	printf("The String with the alphabets only\n");
	char b[100];
	int r=0,p=0;
	while(a[p]!='\0')
	{
		r++;
		p++;
	}
	int q;
	p=0;
	while(p<r)
	{
		q=a[p];
		if((q>=65 && q<=90)||(q>=97 && q<=122)||q==32)
		printf("%c", a[p]);
		p++;
	}
}
void title(char a[100])
{
	int i=1,k=1;
	char b[100];
	printf("Changed form: ");
	if(a[0]==' ')
	{
		i=0;
		k=0;
	}
	else if(a[0]>=97 && a[0]<=122)
	b[0]=a[0]-32;
	else
	b[0]=a[0];
	while(a[i]!='\0')
	{
		if(a[i]!=' ')
		b[k++]=a[i];
		else
		{
			b[k++]=' ';
			if(a[i+1]>=97 && a[i+1]<=122)
			{
				b[k++]=a[i+1]-32;
				i++;
			}
		}
		i++;
	}
	b[k]='\0';
	printf("%s", b);
}
main()
{
	char a[100];
	int n,f;
	do
	{
		printf("Enter a string\n");
		fflush(stdin);
		gets(a);
		printf("Enter\n1) To remove characters except the alphabets\n2) To title case the String\n");
		scanf("%d", &n);
		switch(n)
		{
			case 1:rremove(a);
			break;
			case 2:title(a);
			break;
			default:printf("wrong Choice");
		}
		printf("\nEnter 1 to continue ");
		scanf("%d", &f);
	}
	while(f==1);
}
