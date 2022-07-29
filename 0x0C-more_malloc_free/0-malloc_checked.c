#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - memory allocation using malloc
 * @b: int size of memory to be allocated
 * Return: pointer to memory allocation
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
