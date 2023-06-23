#include <stdio.h>
int factorial(int n);
int main (void)
{
	int num;
     	printf("Enter the upper limit : ");
     	scanf("%i",&num);
     	
     
      
	int sum=0;
	for (int i=1;i<=num;i++)
	{
		sum+=((factorial(i))/i);

	}

	printf("The sum of the series till %i is : %i\n",num,sum);
}
int factorial(int n)
{
	int fact=1;
	for (int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
