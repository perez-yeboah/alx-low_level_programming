#include "main.h"


/**
 * print_alphabet - print letters
 *
 */
void print_alphabet(void)
{
	char line[] = "abcdefghijklmnopqrstuvwxyz";

	int i = 0;

	int size = sizeof(line) / sizeof(line[0]);

	for (i = 0; i < size - 1; i++)
	{
		_putchar(line[i]);
	}

	_putchar('\n');
}
