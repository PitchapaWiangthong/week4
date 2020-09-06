#include<stdio.h>
int isPrime(int x);
int x, i, a = 0;

int isPrime(int x)
{
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return a;
			break;
		}
	}
	a = 1;
	return a;
}

int main3()
{
	scanf_s("%d", &x);
	isPrime(x);
	if (a == 1)
	{
		printf("%d is prime", x);
	}
	else
	{
		printf("%d is not prime", x);
	}
	return 0;
}
