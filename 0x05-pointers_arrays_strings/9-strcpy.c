#include "main.h"

/**
 * _strcpy - copy string
 * @dest: destination
 * @src: source
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}

