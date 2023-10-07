#include <stdio.h>
/**
 * main - entry ponit.
 * Description - prints all combinatios of single digits.
 * Return: 0.
 */
int main(void)
{
	int num  = 48;

	while (num <= 57)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(44);
			putchar(32);
		}
		num++;
	}
	putchar('\n');
	return (0);
}

