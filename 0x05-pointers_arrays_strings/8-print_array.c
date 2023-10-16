#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of integers
 * @n: number of elements to be printed
 * @a: pointer to int array with elements
 */
void print_array(int *a, int n)
{
	if (n < 0)
	{
		return;
	}
	printf("%d shiet",n);
	while (n > 1)
	{
		printf("%d, ", *a);
		a++;
		n--;

	}
	printf("%d", *a);
	printf("\n");
}

