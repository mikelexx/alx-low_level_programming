#include <stdio.h>
/**
 * main -entry point.
 * Description  - print all base to numbers from 0 to 10.
 * Return : 0  to indicate sucess.
 */
int main(void)
{
	int num = 0;

	while (num <= 10)
	{
		printf("%d",num);
		num++;
	}
	putchar('\n');
	return (0);
}
