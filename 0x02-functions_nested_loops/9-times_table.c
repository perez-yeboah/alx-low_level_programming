#include "main.h"
/**
 * times_table - print times table
 *
 */
void times_table(void)
{
	int i = 0, j = 0;

	int t, o;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int temp = i * j;

			t = temp / 10;
			o = temp % 10;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (temp < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(o + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(t + '0');
				_putchar(o + '0');
			}

		}
		_putchar('\n');
	}
}
