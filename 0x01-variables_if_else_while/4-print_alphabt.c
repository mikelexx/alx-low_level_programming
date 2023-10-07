#include <stdio.h>
/**
 * main - entry point .
 * Description - printletter letterll  \
 * lowercletterse letters except q letternd e.
 * Return: 0 for success.
 */
int main(void)
{
	int letter = 'a';
	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
