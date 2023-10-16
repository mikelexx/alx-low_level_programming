#include "main.h"
#include <stdio.h>
/** _puts - prints a string followed by new line \
 * to stdout
 * @:str - pointer to string to be printed
 */
void _puts(char *str)
{
	while(*str)
	{
		int letter;

		letter = *str;
		_putchar(letter);
		str++;
	}
	_putchar('\n');
}
		
	
