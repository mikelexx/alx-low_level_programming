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
		col = 0;
		while (col < 9)
		{	
			if (col < 8)
			{
				printf("%d,  ", col * row);
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
