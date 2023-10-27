#include <stdio.h>
/**
 * main - prints the program's name
 * @argc: count of commandline arguments
 * @argv: array of pointers to commandline arguments
 * Return: 1 for success, 0 otherwise
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
