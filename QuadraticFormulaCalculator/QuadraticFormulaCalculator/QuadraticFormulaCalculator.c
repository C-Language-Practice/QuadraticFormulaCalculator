#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double calcQuadraticEq (double a, double b, double c)
{
	//I dunno how to use exp(x) in math.h lol
	double discriminant = (b * b) - (4 * a * c);

	if (discriminant < 0)
	{
		printf_s("Discriminant negative, There is no solution!");
	}
	if (discriminant > 0)
	{
		printf_s("Discriminant positive, solutions: X1= %f, X2 = %f",
				((-1 * b) + sqrt(discriminant)) / (2 * a), 
				((-1 * b) - sqrt(discriminant)) / (2 * a));
	}
	if (discriminant == 0)
	{
		printf_s("Discriminant is 0, a single solution exists, X = %f",
			(-1.0 * b) / (2 * a));
	}
}

int main()
{
	double a, b, c;

	printf_s("Quadratic Equation Calculator (Ax^2+Bx+C)\n");
	printf_s("Please Enter A:\n");
	scanf_s("%lf", &a);
	printf_s("\n");
	printf_s("Please Enter B:\n");
	scanf_s("%lf", &b);
	printf_s("\n");
	printf_s("Please Enter C:\n");
	scanf_s("%lf", &c);
	printf_s("\n");

	calcQuadraticEq(a, b, c);
	printf_s("\n");

	return 0;
}
