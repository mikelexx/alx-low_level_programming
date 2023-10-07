#include <stdio.h>
/**
 * main  - entry point.
 * Description - priting lowaercase letters in reverse
 * Return: 0 for sucess
 */
int main(void)
{
	int letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
