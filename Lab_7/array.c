#include <stdio.h>
int main()
{
	float a[10];
	for (int i = 0; i < 10; i++)
	{
		printf("Please enter the %dth number: ", i + 1);
		scanf("%f", &a[i]);
	}
	for (int i = 0; i < 10 ; i++)
	{
		for (int j = 0; j < 10 - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("The maximum element is %f.\n", a[9]);
	printf("The minimum element is %f.\n", a[0]);
	printf("The second largest element is %f.\n", a[8]);
	printf("The second smallest element is %f.\n", a[1]);
	printf("The average of these 4 elements is %f\n", (a[0] + a[1] + a[8] + a[9]) / 4);
	return 0;
}