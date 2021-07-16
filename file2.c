#include <stdio.h>
main()
{
	FILE *fp, *ft;
	fp=fopen("file1.txt","r");
	ft=fopen("file3.txt","w");
	if (fp==NULL)
	{
		printf ("cannot open file");
		fclose(fp);	
	}
	else
	{
		char ch, a[100];
		int i=0,k;
		while (1)
		{
			ch=fgetc(fp);
			if(ch!=EOF)
			a[i++]=ch;
			else
			break;
		}
		a[i]='\0';
		if (ft==NULL)
		{
			printf ("cannot open file");
		}
		else
		{
		for(k=i-1;k>=0;k--)
		fputc(a[k],ft);
		}
		fclose(fp);
		fclose(ft);	
	}
}
