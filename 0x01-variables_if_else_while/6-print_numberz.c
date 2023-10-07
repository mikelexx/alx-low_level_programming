#include <stdio.h>
/**
 * main - entry point
 * Description  - print all base to integers using putchar from 0 to 9
 * Return: 0 for success
 */
int main(void)
{
	int num = 0;
	
	while (num <= 9)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
}
