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
	putchar('\n');
}
/**
 * main -entry point.
 * Description - calls the print alphabet function.
 * Return: 0 for success.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
