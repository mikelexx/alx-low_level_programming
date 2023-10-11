#include <stdio.h>
/**
 * main - entry point.
 * Description - prints 50 fibonacci numbers.
 * Return: 0 for success.
 */
int main(void)
{
	int prev = 1;
	int curr = 2;
	int i = 0;
	
	printf("%d, %d, ", prev, curr);
	while (i <=48)
	{
		int temp = curr;
		curr = curr + prev;
		prev = temp;
		printf("%d, ", curr);
		i++;
	}
	return (0);
}

