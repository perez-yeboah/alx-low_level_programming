#include "main.h"

/**
 * main - Entry point of app
 *
 * Return: 1 success
 */
int main(void)
{

	char line[] = "_putchar\n";

	int i = 0;

	int size = sizeof(line) / sizeof(line[0]);

	for(i=0; i< size - 1; i++)
	{
		_putchar(line[i]);
	}


	return (0);
}
