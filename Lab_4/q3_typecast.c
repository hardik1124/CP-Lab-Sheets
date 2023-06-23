#include<stdio.h>
int main()

{	//Example1
	double d = 75.25;
	int i;
	i = (int) d;
	 
	 //Note that 'i' will have the value 75 as it can't store the fractional part.
	printf("%d\n", i);
	
	//Example2
	int sum =17; int count = 5;
	double mean;
	mean = (double)	 sum/count ;
	printf("Value of mean: %f\n", mean);
	
	//Example3
	char a = 'A', b = 'B';
	int z;
	z = (int) a + b;
	printf("z = %d\n", z); 
	return 0;
}
