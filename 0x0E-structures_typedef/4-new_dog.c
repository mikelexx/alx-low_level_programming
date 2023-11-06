#include "dog.h"
#include "stdlib.h"
/**
 * _strlen - returns length of string
 * @s: pointer to string
 * Return: string length null not included
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i + 1);
}
/**
 * _strcpy - copies content of src to dest string and adds null character
 * @src: sourc string
 * @dest: destination string
 * Return: pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a struct newdog
 * @name: pointer to name
 * @age: age member to create fro newdog
 * @owner: pointer to owner
 * Return: pointer to newcreated struct newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2;
	char *dname, *downer;
	dog_t *dt;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	dt = malloc(sizeof(dog_t));
	if (dt == NULL)
		return (NULL);
	len1 = _strlen(name);
	len2 = _strlen(owner);

	dname = (char *)malloc(sizeof(char) * len1);
	if (dname == NULL)
	{
		free(dt);
		return (NULL);
	}
	downer = (char *)malloc(sizeof(char) * len2);
	if (downer == NULL)
	{
		free(dname);
		free(dt);
		return (NULL);
	}
	dt->name = _strcpy(dname, name);
	dt->owner = _strcpy(downer, owner);
	dt->age = age;
	return (dt);
}
