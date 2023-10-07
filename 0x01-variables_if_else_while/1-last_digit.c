#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point.
 * Description - prints the last digit of a random value.
 * Return: 0 for success always.
 */
int mai(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	printf("Last digit of %d is %d", n, last);
	return (0);
}
