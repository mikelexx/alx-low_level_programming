#include <stdio.h>
void print_alphabet_x10(void);
/**
 * print_alphabet_x10 - prints 10 times the alpbaet in lowercase.
 */
void print_alphabet_x10(void)
{
	int row = 0;
	int letter = 'a';

	while (row < 10)
	{
		while(letter <= 'z')
		{
			putchar(letter);
		}
		putchar('\n');
	}
}
int main(void)
{
	print_alphabet_x10();
	return (0);
}

