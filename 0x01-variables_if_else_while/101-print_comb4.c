#include <stdio.h>
/**
 * main - entry point.
 * Description - print combinations of three numbers.
 * Return: 0 for success.
 */
int main(void)
{
	int i = 48;
	int j = 49;
	int k = 50;

	while (i < 58)
	{
		j = 49;
		while (j < 58)
		{
			k = 50;
			while (k < 58)
			{
				if (k > j && j > n)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j !=56)
					{
						putchar(44);
						putchar(32);
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
