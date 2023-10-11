#include <stdio.h>
void times_table(void);
/**
 * times_table - prints the 9 times table starting with 0.
 */
void times_table(void)
{
	int row = 1;
	int col = 0;
	while (col < 10)
	{
		printf("0, ");
		col++;
	}
	printf("0\n");
	while (row < 10)
	{
		printf("0, ");
		col = row;
		while (col < (row * 9))
		{
			if (col < 10)
			{
				printf("%d,  ", col);
			}
			else
			{
				printf("%d, ", col);
			}
			col +=row;
		}
		printf("%d\n", col);
		row ++;
		
	
	}
}
