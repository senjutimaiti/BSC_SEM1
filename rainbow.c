#include<stdio.h>
#include<stdlib.h>
#include<math.h>
char a;
char on_character,off_character;
char arr[7] = {'V','I','B','G','Y','O','R'};
void character_input()
{
	printf("enter the character\t");
	scanf("%c",&a);
	printf("\n");
}
void on_character_input()
{
	int j, z = 0;
	while(1)
	{
		fflush(stdin);
		printf("\nEnter the character you want to switch on. The characters are V, I, B, G, Y, O, R\t");
		scanf("%c",&on_character);
		for(j = 0;j<7;j++)
		{
			if(arr[j] == on_character) //if the inputted on character matches with the predefined list then z becomes 1
			z = 1;
		}
		if(z == 1)
			break;
		else
			printf("\nInvalid input. Pls input again\n");
	}
	printf("\n");
}
void off_character_input()
{
	int j, z = 0;
	while(1)
	{
		fflush(stdin);
		printf("\nEnter the character you want to switch off. The characters are V, I, B, G, Y, O, R\t");
		scanf("%c",&off_character);
		for(j = 0;j<7;j++)
		{
			if(arr[j] == off_character) //if the inputted off character matches with the predefined list then z becomes 1
			z = 1;
		}
		if(z == 1)
			break;
		else
			printf("\nInvalid input. Pls input again\n");
	}
	printf("\n");
}
void display()
{
	char ar[8];
	int k = 0;
	int x = a;
	int m;
	int j = 6;
	//binary conversion of a integer number
	for(;j>=0;j--)
	{
		m = x>>j;
		if(m&1)
			ar[k++] = '1';
		else
			ar[k++] = '0';
	}
	for(j = 0;j<7;j++)	
		printf("%c\t",ar[j]);
	printf("\n");
	for(j = 0;j<7;j++)
	{
		if(ar[j]&1)
			printf("%c\t",arr[j]);
		else
			printf("\t");
	}
	printf("\n\n");
	int z = 0,check,sum = 0,z1 = 0,flag = 0;
	while(1)
	{
		fflush(stdin);
		on_character_input();
		for(j = 0;j<7;j++)
		{
			if(arr[j] == on_character)
				z = j;
		}	
		if(ar[z] == '1') //checking if the bit is already on
			printf("The bit at place %d is already on",(z+1));
		else
		{
			ar[z] = '1'; //if the bit is off (0) then switching on the bit
			printf("The bit representation of entered character after change is:\n");
			for(j = 0;j<7;j++)	
				printf("%c\t",ar[j]);
			printf("\n");
			int con = atoi(ar);
			sum = 0,z1 = 0;
			while(con>0)
			{
				sum+=(con%10*(int)pow(2,z1));
				z1++;
				con/=10;
			}
			for(j = 0;j<7;j++)
			{
				if(ar[j]&1)
				{
					printf("%c\t",arr[j]);
					flag++;
				}
				else
					printf("\t");
			}
			printf("\n\nThe entered character was %c\t",a);
			printf("\nThe character after change is %c\t",sum);
		}
		printf("\n");
		printf("\nDo you want any other further changes? Enter 1 for yes 0 for no\t");
		scanf("%d",&check);
		if(check == 0)
		break;
	}
	while(1)
	{
	flag = 0;
		fflush(stdin);
		off_character_input();
		for(j = 0;j<7;j++)
		{
			if(arr[j] == off_character)
				z = j;
		}
			if(ar[z] == '0')
				printf("The bit at place %d is already off",(z+1));
			else
			{
				ar[z] = '0'; 
				printf("The bit representation of entered character after change is:\n");	
				for(j = 0;j<7;j++)	
					printf("%c\t",ar[j]);
				printf("\n");
				int con = atoi(ar);
				sum = 0,z1 = 0;
				while(con>0)
				{
					sum+=(con%10*(int)pow(2,z1));
					z1++;
					con/=10;
				}
				for(j = 0;j<7;j++)
				{
					if(ar[j]&1)
					{
						printf("%c\t",arr[j]);
						flag++;
					}
					else
						printf("\t");
				}
				printf("\n\nThe entered character was %c\t",a);
				if(flag == 0) //if count becomes equal to 7 then the decimal number becomes 0					
        			printf("\ncharacter is a null character");
				else
					printf("\nThe character after change is %c\t",sum);
			}
			printf("\n");
			printf("\nDo you want any other further changes? Enter 1 for yes 0 for no\t");
			scanf("%d",&check);
			if(check == 0)
			break;
		}
}
int main()
{
	character_input();
	display();
}

