#include <stdio.h>
int square (int n)
{
	return n*n;
}
int cube (int n)
{
	return n*n*n;
}
float area (int n)
{
	return (3.14*n*n);
}
void main ()
{
	int num;
	printf("Enter a number\n");
	scanf ("%d",&num);
	printf("Square : %d\n", square(num));
	printf("Cube : %d\n", cube(num));
	printf("Area of Circle : %f\n", area(num));
}