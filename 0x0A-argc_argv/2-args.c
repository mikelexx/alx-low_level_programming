#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: count of arguments
 * @argv: array of pointers to arguments
 * Return: 1 for success, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
