#include <stdio.h>
/**
 * main - entry point.
 * Description - prints 50 fibonacci numbers.
 * Return: 0 for success.
 */
int main(void)
{
	long  long int prev = 1;
	long long  int curr = 2;
	int i = 0;
	
	printf("%lld, %lld, ", prev, curr);
	while (i <=48)
	{
		int temp = curr;
		curr = curr + prev;
		prev = temp;
		printf("%lld, ", curr);
		i++;
	}
	return (0);
}

