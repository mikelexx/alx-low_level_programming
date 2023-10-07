#include <stdio.h>
/**
 * main - entry point.
 * Description - print combinations of three numbers.
 * Return: 0 for success.
 */
int main(void)
{
	for (int i = 0; i < 8; i++;)
	{
		for (int j = i+1; j < 8; j++;)
		{
			for (int k = j+1; k < 8; j++;)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
				if (i != 7)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

