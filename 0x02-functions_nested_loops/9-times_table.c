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
			if ((col * row) < 10)
			{
				printf("%d,  ", col * row);
			}
			else
			{
				printf("%d, ", col * row);
			}
			col ++;
		}
		printf("%d\n", col);
		row ++;
		
	
	}
}
