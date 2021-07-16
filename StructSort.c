#include <stdio.h>
#include <stdlib.h>
struct student
{
	int roll;
	char name[30];
	float per;
};
main()
{
	int n,i,j;
	printf("Enter the number of students ");
	scanf("%d", &n);
	if(n>0)
	{
		struct student s[n],temp;
		printf("Enter the roll number, name and percent respectively of %d students\n", n);
		for(i=0;i<n;i++)
		{
			printf("Enter the details of %d student\n", (i+1));
			scanf("%d", &s[i].roll);
			fflush(stdin);
			gets(s[i].name);
			fflush(stdin);
			scanf("%f", &s[i].per);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(s[j].per<s[j+1].per)
				{
					temp=s[j];
					s[j]=s[j+1];
					s[j+1]=temp;
				}
			}
		}
		printf("Details of the students in order of their percentage\n");
		printf("Roll\tName\t\t\tPercentage\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t%s\t\t%.2f\n", s[i].roll,s[i].name,s[i].per);
		}
	}
	else
	printf("Wrong Input");
}
