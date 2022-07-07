#include "main.h"
/**
 * times_table - print times table
 *
 */
void times_table(void)
{
	int i = 0, j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(48 + (i*j));
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
