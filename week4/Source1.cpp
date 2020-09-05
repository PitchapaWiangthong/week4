#include<stdio.h>
int main4()
{
	int num, sum1 = 0, sum2 = 0,sum3 = 0;
	scanf_s("%d", &num);
	while (num % 10 != 0)
	{
		sum1 += num % 10;
		num = num / 10;
	
	}
	printf("%d\n", sum1);
	if (sum1 != 10)
	{
		while (sum1 % 10 != 0)
		{
			sum2 += sum1 % 10;
			sum1 = sum1 / 10;
		}
	}
	else
	{
		sum2 = 1;
	}
	printf("%d\n", sum2);
	if(sum2>=10)
	while (sum2 % 10 != 0)
	{
		sum3 += sum2 % 10;
		sum2 = sum2 / 10;
	}
	printf("%d", sum3);
	return 0;
}