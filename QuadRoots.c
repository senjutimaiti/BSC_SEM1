#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	int a,b,c,d;
	float x2,x1;
	printf("Enter a,b,c of the general formula ax^2+bx+c=0 respectively\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if(a==0 && b==0 && c==0)
	printf("The equation does not exist");
	else if(a==0)
	printf("The equation is not quadratic");
	else
	{
		d=(b*b)-(4*a*c);//finding discriminant
		if(d<0)
		printf("The roots are unequal and imaginary");
		else if(d==0)
		{
			printf("The roots are real and equal\n");
			x1=-1*b/(2*a);
			printf("The root = %f", x1);
		}
		else
		{
			printf("The roots are real and unequal\n");
			x1=(-1*b)+sqrt(d);
			x1=x1/(2*a);
			x2=(-1*b)-sqrt(d);
			x2=x2/(2*a);
			printf("The roots are = %f,%f ",x1,x2);
		}
	}
}
