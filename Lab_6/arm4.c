#include <stdio.h>
#include <math.h>
int IsArmstrong(int num)
{
	int z= num, count=0, sum=0;
	while(z!=0)
	{
		z=z/10;
		count++;
	}
	z=num;
	int r;
	while(z!=0)
	{
		r=z%10;
		sum=sum+pow(r,count);
		z/=10;
	}
	if (sum==num)
		return 1;
	else
		return 0;
}
void main()
{
	int i, a,b;
	printf("Enter lower limit\n");
	scanf("%d", &a);
	printf("Enter upper limit\n");
	scanf("%d", &b);
	for (i=a; i<=b; i++)
	{
		if (IsArmstrong(i)==1)
			printf("%d\n", i);
	}

}