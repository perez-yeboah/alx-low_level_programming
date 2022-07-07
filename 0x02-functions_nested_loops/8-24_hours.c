#include "main.h"

/**
 * jack_bauer - prints time
 *
 */
void jack_bauer(void)
{
	int i = 0, j = 0, l = 0;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++) 
		{
			
			_putchar(i);
			_putchar(':');
			_putchar(j);
			_putchar('\n');
		}
	}
}
