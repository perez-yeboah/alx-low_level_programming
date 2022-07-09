#include <stdio.h>
#include <stdbool.h>

/**
 * main - entry point
 *
 * Return: 0 success 1 failure
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		bool mul3 = i % 3 == 0;
		bool mul5 = i % 5 == 0;

		if (mul3 & mul5)
		{
			printf("FizzBuzz");
		}
		else if (mul3)
		{
			printf("Fizz");
		}
		else if (mul5)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}



