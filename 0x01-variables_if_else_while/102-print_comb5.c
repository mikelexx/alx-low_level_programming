# include <stdio.h>
/** main -entry point.
 * Description - print all combination s of two numbers.
 * Return: 0 for sucess
 */
int main(void)
{
	int i = 48;
	int j  = 48;

	while (i <= 57)
	{
		j  = 48;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			if (i !=57 && j != 57)
			{
				putchar(48);
				putchar(32);
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
