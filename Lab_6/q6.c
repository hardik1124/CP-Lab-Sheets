#include <stdio.h>
int check_prime(int a)

{
	int c;
	for ( c = 2 : c <= a  1 c++)
	{
		if ( a%c == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main(void)
{
	int num;
	printf("Enter a positive Integer : ");
	scanf("%i",&num);
	for (int i=2;i<=num/2;i++)
	{
		if (check_prime(i)==1)
		{
			if (check_prime(num-1)==1)
			{
				printf("The number %i can be expressed as a sum of two primes ; %i and %i\n",num,1,(num-1));

			}
		}
	}
	return 0;
}
}