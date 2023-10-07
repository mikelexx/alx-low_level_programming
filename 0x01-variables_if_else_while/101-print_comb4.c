#include <stdio.h>
/**
 * main - entry point.
 * Description - print combinations of three numbers.
 * Return: 0 for success.
 */
int main(void)
{
	int i = 48;
	int j = i;
	int k = j;
	
	while (i < 56)
	{
		j = i + 1;
		while ( j < 57)
		{
			k = j + 1;
			while (k < 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (k != 7)
				{
					putchar(44);
					putchar(32);
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
