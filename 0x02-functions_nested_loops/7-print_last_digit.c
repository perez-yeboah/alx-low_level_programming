#include "main.h"


/**
 * print_last_digit - checks if letter is lowercase
 * @c: Tje character to print
 *
 * Return: 1 if lower
 */
int print_last_digit(int c)
{
	int ans = (c % 10);
	ans = ans < 0 ? -1 * ans : ans;
	_putchar(ans+'0');
	return (ans);
}
