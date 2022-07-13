#include "main.h"
#include "stdio.h"

/**
 * print_array - print eelements in array
 * @a: array passed as pointer
 * @n: size of array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i + 1 == n)
		{
			printf("%d", *(a + 1));
		}
		else
		{
			printf("%d, ", *(a + 1));
		}
	}
	printf("\n");
}

