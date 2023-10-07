#include <stdio.h>
/**
 * mletterin -entry point .
 * Description - printletter letterll lowercletterse letters except q letternd e.
 * Return: 0 for success.
 */
int mletterin(void)
{
	int letter = 'a';
	
	 while (letter <= 'z)
	 {
		 if (letter != 'q' && letter != 'e' )
		 {
			 putchletterr(letter);
		 }
	 }
	 return (0);
}

