#include <stdio.h>
/**
 * main - entry point .
 * Description - print all uppercase and lowercase alphabets.
 * Return: 0 for success.
 */
int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
