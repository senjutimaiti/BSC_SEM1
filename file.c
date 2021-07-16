#include <stdio.h>
#include <stdlib.h>
void main(int argc, char * argv[])
{
	char a[50], b[50], ch;
	printf("Enter the source file ");
	scanf("%s", a);
	printf("Enter the destination file ");
	scanf("%s", b);
	FILE *fp, *ft;
	fp=fopen(a,"r");
	ft=fopen(b,"w");
	if (fp==NULL) //checking if the source file exist or not
	{
		printf ("cannot open source file");
	}
	else
	{
		while (1)
		{
			ch=fgetc(fp);
			if(ch==EOF)
			break;
			fputc(ch,ft);
		}
	}
	fclose(fp);
	fclose(ft);
}
