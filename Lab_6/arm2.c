#include <stdio.h>
int main(){
	int n1, n2, i, a, N, sum;
	printf ("The lower limit is: ");
	scanf ("%d", &n1);
	printf ("The upper limit is: ");
	scanf ("%d", &n2);
	printf ("The Armstrong numbers in the range are: \n");	
	for (i=n1; i<=n2; i++){
		N=i;
		sum=0;
		while (N != 0){
			a = N % 10;
			N = N/10;
			sum += (a*a*a);	
		}
	if (sum == i)
		printf ("%d\n", i);
	}
}