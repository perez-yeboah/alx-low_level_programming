void print_alphabet(void);

/**
 * print_alphabet - print letters
 *
 */
void print_alphabet(void)
{
	char line[] = "abcfefghijklmnopqrstuvwxyz\n";

	int i = 0;

	int size = sizeof(line) / sizeof(line[0]);

	for (i = 0; i < size - 1; i++)
	{
	        _putchar(line[i]);
	}
}
