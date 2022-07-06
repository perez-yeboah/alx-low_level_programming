#include "main.h"


/**
 * print_alphabet_x10 - print letters
 *
 */
void print_alphabet_x10(void)
{
	char line[] = "abcdefghijklmnopqrstuvwxyz";

	int i = 0;

	int j = 0;

	int size = sizeof(line) / sizeof(line[0]);

	for (j = 0; j < 10; j++)
	{

		for (i = 0; i < size - 1; i++)
		{
			_putchar(line[i]);
		}

		_putchar('\n');
	}
}
