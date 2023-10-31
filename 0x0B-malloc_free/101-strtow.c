#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - splits a string to words
 * @str: pointer to string
 * Return: pointer to array of strings(words) \
 else NULL if str == NULL or str == " " else NULL
 */
char **strtow(char *str)
{
	int count, i = 0, sub = 0, j;
	char *ptr, **strw;
	if (str == NULL || *str == '\0')
		return (NULL);
	while (str[i])
	{
		if (str[i]!= '\t' || str[i] != ' ')
		{
			count = 0;
			while( str[i] != '\t' || str[i] != ' ')
			{
				count++;
				i++;
				printf("%d,i =  %d \n",count,i);
			}
			sub++;
			ptr = (char *) malloc(sizeof(char) *count + 1);
			if (ptr == NULL)
				return (NULL);
			for(j = 0;j < count;j++)
			{
				ptr[j] = str[i + j];
				printf("%c",str[i + j]);
			}
			ptr[j] = '\0';
			printf("\n");
		}
		i++;
	}
	strw = (char **) malloc(sizeof(char *) * sub);
	return (strw);
}
