#include "main.h"


/**
 * print_sign - checks if letter is lowercase
 * @c: Tje character to print
 *
 * Return: 1 if lower
 */
int print_sign(int c)
{
	return (c > 0 ? 1 : c < 0 ? -1 : 0);
}
