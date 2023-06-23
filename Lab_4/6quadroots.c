#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, x1, x2, D;
	printf("Please input a, b, c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	D = b*b - 4*a*c;
	x1 = (-1*b + sqrt(D))/(2*a);
	x2 = (-1*b - sqrt(D))/(2*a);
	printf("Root1: %lf, Root2 = %lf\n", x1, x2);
	return 0;
}
