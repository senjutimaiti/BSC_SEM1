#include<stdio.h>
#include<stdlib.h>
main()
{
	char a[50];
	int c=0,i=0,j,k,m;
	printf("Enter a word ");
	gets(a);
	while(a[i]!='\0')
	{
		c++;
		i++;
	}
	if(c%2==0)
	m=c+1;
	else
	m=c;
	k=c/2-1;
	for(i=0;i<m;i++)
	{
		if(c%2==0 && i==c/2)
		continue;
		if (c%2==0 &&i==c/2+1)
		{
			k--;
			continue;
		}
		for(j=0;j<c;j++)
		{
			if(i<=(c/2))
			{
				if(j>=i && j<c-i)
				printf("%c", a[j]);
				else
				printf(" ");
			}
			else
			{
				if(j>=k && j<c-k)
				printf("%c", a[j]);
				else
				printf(" ");
			}	
		}
		printf("\n");
		if(i>(c/2))
		k--;
	}
}
