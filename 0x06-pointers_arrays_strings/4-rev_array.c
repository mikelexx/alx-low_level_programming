#include "main.h"
/**
 * reverse_array - reverses the content of \
 * an array of integers
 * @a: pointer to string to be reversed
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int tmp;

	a += n - 1;
	while ( start <= a)
	{
		tmp = *start;
		*start = *a;
		*a = tmp;
		start++;
		a--;
	}
}
