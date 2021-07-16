#include <stdio.h>
#include <stdlib.h>
struct student
{
	char a[50];
	int roll;
	int marks[5];
	int tot;
	float per;
	char grd;
};
void main(int argc, char * argv[])
{
	int i,j;
	struct student s[5];
	for(i=0;i<5;i++)
	{
		printf("Enter the name, roll no. and marks of student %d respectively\n", (i+1));
		fflush(stdin);
		gets(s[i].a);
		scanf("%d", &s[i].roll);
		s[i].tot=0;
		for(j=0;j<5;j++)
		{
			scanf("%d", &s[i].marks[j]);
			s[i].tot=s[i].tot+s[i].marks[j]; //calculating the total marks
		}
		s[i].per=s[i].tot/5; //finding the percentage
		if (s[i].per<60 && s[i].per>=0)
		s[i].grd='D';
		if (s[i].per<70 && s[i].per>=60)
		s[i].grd='C';
		if (s[i].per<80 && s[i].per>=70)
		s[i].grd='B';
		if (s[i].per<100 && s[i].per>=80)
		s[i].grd='A';
	}
	FILE *fp;
	fp=fopen("file3.txt","w");
	fputs("Roll no.\tName\t\tTotal marks\tPercentage\t\tGrade\n", fp);
	for(i=0;i<5;i++)
	{
		fprintf(fp,"%d\t\t%s\t%d\t\t%f\t\t%c\n",s[i].roll,s[i].a,s[i].tot,s[i].per,s[i].grd);
	}
	fclose(fp);
}

