#include <stdio.h>
#include <stdlib.h>
int hcf(int i,int a,int b)
{
	if(i==0)
	return 0;
	else
	{
		if(a%i==0 && b%i==0)
		return i;
		else
		return hcf((i-1),a,b);
	}
}
int lcm(int i,int a,int b)
{
	if(i==0)
	return 0;
	else
	{
		if(a%i==0 && b%i==0)
		{
			int k=a*b;
			return (k/i);
		}
		else
		return lcm((i-1),a,b);
	}
}
void main()
{
	int a,b,n,h,l;
	printf("Enter 2 numbers\n");
	scanf("%d", &a);
	scanf("%d", &b);
	if(a>0 && b>0)
	{
		printf("Enter\n1 to find HCF\n2 to find LCM\n");
			scanf("%d", &n);
			switch(n)
			{
				case 1: {if(a<b)
						h=hcf(a,a,b);
						else
						h=hcf(b,b,a);
						printf("The HCF = %d", h);
					break;
				}
				case 2: {if(a<b)
						l=lcm(a,a,b);
						else
						l=lcm(b,b,a);
						printf("The LCM = %d", l);
					break;
				}
				default: printf("Wrong Choice");
			}
	}
	else
	printf("Wrong Input");
}

