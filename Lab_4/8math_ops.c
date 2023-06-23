#include <stdio.h>
#include <math.h>
#define PI  3.142f
int main()
{
	float x =1, y =1;
	float expr1 = (exp(x)*sin(PI/3)+ 5.6*pow(10,-5))/(3 * cos(PI/6));
	float expr2 = sin((atan(0.33) + PI)/(2*y));
	printf("expr1 = %f, expr2 = %f", expr1, expr2);
	return 0;
}