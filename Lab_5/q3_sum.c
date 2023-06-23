#include <stdio.h>

int main()
{
	int a,b,c,d;
	int sum = 0;
	printf ("Enter 4 numbers: ");
	scanf ("%d" "%d" "%d" "%d", &a, &b, &c, &d);

	if (a>=b && a>=c && a>=d){
		if (b>=c && b>=d){
			sum = a+b;
			printf("%d", sum);
		}
		else if (c>=b && c>=d){
			sum = a+c;
			printf("%d", sum);
		}
		else if (d>=b && d>=c){
			sum = a+d;
			printf("%d", sum);
		}
	}
	else if (b>=a && b>=c && b>=d){
		if (a>=c && a>=d){
			sum = a+b;
			printf("%d", sum);
		}
		else if (c>=a && c>=d){
			sum = b+c;
			printf("%d", sum);
		}
		else if (d>=a && d>=c){
			sum = b+d;
			printf("%d", sum);
		}
	}
	else if (c>=a && c>=b && c>=d){
		if (b>=a && b>=d){
			sum = c+b;
			printf("%d", sum);
		}
		else if (a>=b && a>=d){
			sum = a+c;
			printf("%d", sum);
		}
		else if (d>=b && d>=a){
			sum = c+d;
			printf("%d", sum);
		}
	}
	else if (d>=a && d>=b && d>=c){
		if (b>=c && b>=a){
			sum = d+b;
			printf("%d", sum);
		}
		else if (c>=b && c>=a){
			sum = d+c;
			printf("%d", sum);
		}
		else if (a>=b && a>=c){
			sum = a+d;
			printf("%d", sum);
		}
		printf("\n");
	}

	return 0;

}