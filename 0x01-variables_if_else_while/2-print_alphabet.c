#include <stdio.h>
/**
 * main - entry pioint.
 * Description - print all alphabets in lower case.
 * Return: 0 always for success.
 */
int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
