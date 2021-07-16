#include <stdio.h>
main()
{
	FILE *fp;
	fp=fopen("file1.txt","r");
	
	if (fp==NULL)
	{
		printf ("cannot open file");
		fclose(fp);	
	}
	else
	{
		char ch;
		while (1)
		{
			ch=fgetc(fp);
			if(ch!=EOF)
			printf ("%c", ch);
			else
			break;
		}
		fclose(fp);
	}
}
