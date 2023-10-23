#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum the diagnals \
 of a square matrix of integers.
 * @a: pointer to matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int leftsum = 0;
	int rightsum = 0;

	for (i = 0; i < size; i++)
	{
		leftsum += a[(i * size) + i];
		rightsum += a[(i * size) + (size - i) - 1];
	}
	printf("%d, %d", leftsum, rightsum);
	printf("\n");
}
