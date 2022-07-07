#include "main.h"


/**
 * print_last_digit - checks if letter is lowercase
 * @c: Tje character to print
 *
 * Return: 1 if lower
 */
int print_last_digit(int c)
{
	int ans = -1 * (c % 10);
	_putchar(ans);
	return (ans);
}
