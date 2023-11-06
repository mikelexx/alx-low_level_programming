#include <stdio.h>
/**
 * main - prints name of file it was compiled from
 * Return: 0 for sucess 1 else
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
