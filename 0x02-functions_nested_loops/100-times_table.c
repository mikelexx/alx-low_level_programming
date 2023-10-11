#include <stdio.h>
void print_times_table(int n);
/**
 * print_times_table - prints the 9 times table starting with 0.
 * @n: number of rows and columns to be created.
 */
void print_times_table(int n)
{
	int row = 0;
	int col = 0;

	if (n > 15 || n < 0)
	{
		return;
	}
	if (n == 0)
	{
		printf("0\n");
		return;
	}
	while (row < n + 1)
	{
		col = 0;
		while (col < n)
		{
			if (col == 0)
			{
				printf("%d,", 0);
			}

			else if  ((col * row) < 10)
			{
				printf("   %d,", col * row);
			}
			else if ((col * row) < 100)
			{
				printf("  %d,", col * row);
			}
			else
			{
				printf(" %d,", col * row);
			}
			col++;
		}
		if ((col * row) < 10)
		{
			printf("   %d\n", col * row);
		}
		else if ((col * row) < 100)
		{
			printf("  %d\n", col * row);
		}
		else
		{
			printf(" %d\n", col * row);
		}
		row++;
	}
}

