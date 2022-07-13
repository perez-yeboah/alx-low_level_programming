#include "main.h"

/**
 * print_rev - reverse string
 * @s: string to reverse
 */
void print_rev(char *s)
{
	int len = 0;
	int i;
	char temp[100];

	while (*s != '\0')
	{
		temp[len++] = *s++;
	}

	
	for (i = len-1; i >= 0; i--)
	{
		_putchar(temp[i]);
	}
	_putchar('\n');
}
