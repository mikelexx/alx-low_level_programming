#include <stdio.h>
/**
 * main - performs fizz-buzz-test.
 * Return: 0 always.
 */
int main(void)
{
	int num = 2;
	printf("%d",1);
	while (num < 101)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
		{
			printf(" FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (num % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", num);
		}
		num++;
	}
	putchar(10);
	return (0);
}
