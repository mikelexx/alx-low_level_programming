#include <stdio.h>
int _isalpha(int c);

int _isalpha(int c)
{
	if ( 65 <= c <= 90 || 97 <= c <= 122)
	{
		return 1;
	}
	return 0;
}
