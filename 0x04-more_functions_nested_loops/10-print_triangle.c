#include "main.h"

/**
 * print_triangle - print
 * @n: size
 */
void print_triangle(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, l;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n - i; j++)
			{
				_putchar(' ');
			}
			for (l = j; l <= n; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

