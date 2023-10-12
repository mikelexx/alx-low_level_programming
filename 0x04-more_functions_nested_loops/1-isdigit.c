int _isdigit(int c);
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: number to be checked.
 * Return: 1 if c is a digit else 0.
 */
int _digit(int c)
{
	if (c >=48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
