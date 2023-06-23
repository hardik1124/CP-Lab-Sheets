#include <stdio.h>
#include "answer.h"
int main()
{
	int correctans[4] = {5, 10, 0, 4}, score = 0;

	for (int i = 0; i < 4; i++)
	{
		if (myans(i) == correctans[i])
		{
			score++;
		}
	}
	printf("The number of correct answers is %d\n", score);
}