#include <stdio.h>
/**
 * main - entry point.
 * Description  - print hexadecimals.
 * Return: 0 for sucess.
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	num = 'a';
	while (num <= 'z')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
}
