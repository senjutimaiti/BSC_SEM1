#include <stdio.h>
main()
{
	FILE *fp, *ft;
	fp=fopen("file2.txt","r");
	ft=fopen("file4.txt","w");
	if (fp==NULL)
	{
		printf ("cannot open file");
		fclose(fp);	
	}
	else
	{
		char ch, a[10][100];
		int i=0,j=0,k;
		while(1)
		{
			while (1)
			{
				ch=fgetc(fp);
				if(ch!='.' && ch!='\n' && ch!=EOF)
				a[j][i++]=ch;
				else
				break;
			}
			if(a[j][i-1]!='\0')
			j++;
			a[j][i]='\0';
			i=0;
			if(ch==EOF)
			break;
		}
		if (ft==NULL)
		{
			printf ("cannot open file");
		}
		else
		{
			for(k=j-1;k>=0;k--)
			{
				i=0;
				while(a[k][i]!='\0')
				{
					fputc(a[k][i],ft);
					i=i+1;
				}
				fputc('\n',ft);
			}
		}
		fclose(fp);
		fclose(ft);	
	}
}
