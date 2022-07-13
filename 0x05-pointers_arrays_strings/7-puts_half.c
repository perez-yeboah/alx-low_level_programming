#include "main.h"

/**
 * puts_half - prints half
 * @str: paramter
 */
void puts_half(char *str)
{
	int len = 0;
	char temp[1000];
	int n;

	while (*str != '\0')
	{
		temp[len++] = *str++;
	}
	n = len % 2 == 1 ? (len - 1) / 2 : len / 2;
	/* n = len / 2;*/

	while (n < len)
	{
		_putchar(temp[n++]);
	}
	_putchar('\n');
}
