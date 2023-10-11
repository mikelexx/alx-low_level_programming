#include <stdio.h>
void times_table(void);
/**
 * times_table - prints the 9 times table starting with 0.
 */
void times_table(void)
{
	int row = 1;
	int col = 0;
	
	while (row < 10)
	{
		printf("0, ");
		col = 0;
		while (col < 10)
		{	
			if (col < 10)
			{
				printf("%d,  ", col+row);
			}
			else
			{
				printf("%d, ", col);
			}
			col ++;
		}
		printf("%d\n", col);
		row ++;
		
	
	}
}
