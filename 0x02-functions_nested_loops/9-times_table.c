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
		printf("0");
		col = row;
		while (col < (row * 9))
		{
			printf("%d, ",col);
			col +=row;
		}
		printf("%d\n", col);
		row ++;
		
	
	}
}
