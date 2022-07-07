#include "main.h"


/**
 * print_sign - checks if letter is lowercase
 * @c: Tje character to print
 *
 * Return: 1 if lower
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	} else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
