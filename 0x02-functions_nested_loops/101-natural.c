 #include <stdio.h>
/**
 * main  - entry ponint.
 * Description - prints sum of natural numbers below 1024 \
 * inclusive that are multiples of 3 or 5.
 * Return: 0 for success.
 */
int main(void)
{
	int i = 1;
	int total = 0;
	
	while (i <= 1024)
	{

		if (i %3 == 0 || i % 5 == 0)
		{
			total += i;
		}
		 i++;
	}
	printf("%d\n", total);
	return (0);
}
