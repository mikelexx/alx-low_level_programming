#include <stdio.h>
void print_alphabet(void);
/**
 * print_alphabet - prints all lwercase alphabets.
 */
void print_alphabet(void)
{
	int start = 'a';

	while (start <= 'z')
	{
		putchar(start);
		start++;
	}
}
