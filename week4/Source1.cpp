#include<stdio.h>
int main()
{
	long long num, sum1 = 0, sum2 = 0, sum3 = 0;
	scanf_s("%lld", &num);
	while (num % 10 != 0)
	{
		sum1 += num % 10;
		num = num / 10;
	}
	printf("%lld\n", sum1);
	if (sum1 % 10 == 0)
	{
		sum2 = sum1 / 10;
	}
	else
	{
		while (sum1 % 10 != 0)
		{
			sum2 += sum1 % 10;
			sum1 = sum1 / 10;

			if (sum1 % 10 == 0)
			{
				sum2 += (sum1 / 10);
			}
		}
	}
	printf("%lld\n", sum2);
	return 0;
}