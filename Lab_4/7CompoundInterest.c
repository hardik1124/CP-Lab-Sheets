#include <stdio.h>
#include <math.h>
int main()
{
	double P, T, R, A;
	printf("Please enter Initial principle balance: ");
	scanf("%lf", &P);
	printf("Number of years: ");
	scanf("%lf", &T);
	printf("Interest Rate per annum: ");
	scanf("%lf", &R);
	A = P * pow((1 + (R/100)), T);
	printf("\nThe final amount will be: %lf\n", A);
	return 0;

}