#include "main.h"

/**
 * _puts - print to stdout
 * @str: parameter
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

