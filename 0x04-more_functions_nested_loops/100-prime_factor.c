#include <stdio.h>
#include <stdbool.h>

/**
 * isPrime - is prince
 * @n: num
 *
 * Return: boolean
 */
bool isPrime(long n)
{
	int count = 0;

	long i;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count += 1;
		}
	}
	return (count == 2 ? true : false);
}

/**
 * main - pint
 *
 * Return - 0
 */
int main(void)
{
	long num = 612852475143;
	long max = 0;

	long i;

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0 && isPrime(i) && i > max)
		{
			max = i;
		}
	}
	printf("%ld\n", max);

	return (0);
}

