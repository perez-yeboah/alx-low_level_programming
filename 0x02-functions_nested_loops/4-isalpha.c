#include "main.h"


/**
 * _isalpha - checks if letter is uppercase
 * @c: Tje character to print
 *
 * Return: 1 if upper or lower
 */
int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) ? 1 : 0);
}
