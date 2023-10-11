#include <stdio.h>
void times_table(void);
/**
 * times_table - prints the 9 times table starting with 0.
 */
void times_table(void)
{
	int row = 0;
	int col = 0;
	
	while (row < 10)
	{
		col = 0;
		while (col < 9)
		{	
			if (col == 0)
			{
				printf("%d,", 0);
			}

			else if  ((col * row) < 10)
			{
				printf("  %d,", col * row);
			}
			else
			{
				printf(" %d,", col * row);
			}
			col ++;
		}
		if ((col*row) < 10)
		{
			printf("  %d\n", col* row);
		}
		else
		{
			print(" %d\n", col*row);
		}
		row ++;
		
	
	}
}
