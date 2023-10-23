#include "main.h"
/**
 * set_string - sets the value of pointer \
 to a char
 * @s: pointer to pointer to string
 * @to: pointer to char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
