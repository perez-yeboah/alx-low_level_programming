/**
 * _isdigit - check if character is digit
 * @c: character to check
 *
 * Return: 1 if digit 0 if not
 */
int _isdigit(int c)
{
	return ((c >= 0 && c <= 9) || (c >= 48 && c <= 57) ? 1 : 0);
}

