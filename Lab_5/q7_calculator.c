#include <stdio.h> 
int main ()
{
		char c; 
		int a,b;
		printf("Enter the arithmetic operator:  ");
		scanf(" %c", &c);
		printf("Enter the numbers: ");
		scanf("%d\n", &a);
		scanf("%d", &b);
		switch (c)
		{
			case '+': printf("%d", a + b); break;
			case '-': printf("%d", a - b); break;
			case '*': printf("%d", a * b); break;
			case '/': printf("%d", a / b); break;
			case '%': printf("%d", a % b); break;
			default: printf("Can't divide bu\n");
		}
}