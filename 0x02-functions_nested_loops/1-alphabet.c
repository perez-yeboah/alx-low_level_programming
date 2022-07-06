#include "main.h"

/**
 * main - Entry point of app
 *
 * Return: 1 success
 */
int main(void)
{

	print_alphabet();

	_putchar('\n');


	return (0);
}

/**
 * print_alphabet - print letters
 *
 */
void print_alphabet(void)
{
	char line[] = "abcfefghijklmnopqrstuvwxyz";

	int i = 0;

	int size = sizeof(line) / sizeof(line[0]);

	for (i = 0; i < size - 1; i++)
	{
	        _putchar(line[i]);
	}
}
