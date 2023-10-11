#include <stdio.h>
/**
 * main - entry point.
 * Description - prints 50 fibonacci numbers.
 * Return: 0 for success.
 */
int main(void)
{
	long int prev = 1;
	long int curr = 2;
	int i = 0;
	
	printf("%ld, %ld, ", prev, curr);
	while (i <=48)
	{
		int temp = curr;
		curr = curr + prev;
		prev = temp;
		printf("%ld, ", curr);
		i++;
	}
	return (0);
}

