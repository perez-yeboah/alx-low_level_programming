#include "main.h"

/**
 * puts2 - desc
 * @str: parameter
 */
void puts2(char *str)
{
	int index = 0;

	while (*str != '\0')
	{
		if (index % 2 == 0)
		{
			_putchar(*str);
		}
		index++;
		str++;
	}
	_putchar('\n');
}
