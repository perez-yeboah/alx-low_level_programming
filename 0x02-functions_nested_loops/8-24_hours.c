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
			for (l = 0; l < 60; l++)
			{
				int sec = l < 10 ? '0' + l : l;
				int min = j < 10 ? '0' + j : j;
				int hr = i < 10 ? '0' + i : i;

				_putchar(hr + min + sec);
			}
		}
	}
}
