#include <stdio.h>
/**
 * main - entry ponit.
 * Description - prints all combinatios of single digits.
 * Return: 0.
 */
int main(void)
{
	int num  = 48;

	while (num < 56)
	{
		putchar(num);
		putchar(44);
		putchar(32);
		num++;
	}
	putchar(57);
	return (0);
}

