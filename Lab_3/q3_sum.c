#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("%d\n%d\n%d\n", num1, num2, num3); // printing values before assignment
    num1 = 2;
    num2 = 4;
    num3 = num1 + num2; // computing the sum of num1 and num2
    printf("The sum is: %d \n", num3); // printing the sum
    return 0;
}