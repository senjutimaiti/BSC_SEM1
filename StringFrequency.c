#include<stdio.h>
frequency(char a[100])
{
	int r,p=0;
	while(a[p]!='\0')
	{
		r++;
		p++;
	}
	int temp,i,j;
	for(i=0;i<r-1;i++)
	{
		for(j=0;j<r-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	int q,s;
	p=0;
	while(p<r)
	{
		q=a[p];
		s=0;
		while(a[p]==q)
		{
			s++;
			p++;
		}
		if(q==32)
		continue;
		else
		{
			char ch=(char)q;
			printf("%c is found %d times\n", ch,s);
		}
	}
}
main()
{
	char a[100];
	printf("Enter a string\n");
	gets(a);
	frequency(a);
}
