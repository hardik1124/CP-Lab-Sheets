#include <stdio.h>
int main(){

	for(i=n1;i<=n2;i++){
		if(i == sum_pow(i)){
			printf("%d\n", i);
		}
	}

	return 0;

}
int main()
{
	int n1, n2, i, a, N, sum;
	printf ("The lower limit is: ");
	scanf ("%d", &n1);
	printf ("The upper limit is: ");
	scanf ("%d", &n2);

	printf ("The Armstrong numbers in the range are: \n");

		
	for (i=n1; i<=n2; i++)
	{
		N=i;
		sum=0;
	
	while (N != 0)
	{
		a = N % 10;
		N = N/10;
		sum += (a*a*a);
		
	}

	if (sum == i){
		printf ("%d\n", i);
		}
	}
}	
armstrong.c
#include <stdio.h>
#include <math.h>

int digits(int x){
	int digits = 0;
	while(x>=1){
		x = x/10;
		digits++;
	}
	return digits;
}

int sum_pow(int x){
	int sum = 0;
	int power = digits(x);
	while(x>=1){
		sum = sum + pow(x%10, power);
		x = x/10;
	}
	return sum;
}