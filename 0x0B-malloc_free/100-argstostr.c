#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of program
 * @ac: argument count
 * @av: argument variables
 * Return: pointer to new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j = 0, k = 0, size = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
			j++;
		size += j;
	}
	ptr = (char *) malloc(sizeof(char) * size + ac + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			ptr[k] =  av[i][j];
			k++;
			j++;
		}
		ptr[k] = '\n';
		i++;
		k++;
	}
	return (ptr);
}
