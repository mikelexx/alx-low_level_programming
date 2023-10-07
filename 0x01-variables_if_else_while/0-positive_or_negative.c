#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**main - entry point.
 * Decription - Assigns random number to variable n each time its executed.
 * Return  -0 for sucess
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	printf("\n");
	return (0);
}

