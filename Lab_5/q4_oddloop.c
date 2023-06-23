#include <stdio.h>

int main()
{
	int N, num;
	num = 1;
	printf ("Enter a number: ");
	scanf ("%d", &N);
	while (num <= N) /* as long as num has not exceeded N... */
	{
		(num % 2)? printf("%d\n", num):0; // print num if it is odd
		++num; // increment num to next number
	}
}