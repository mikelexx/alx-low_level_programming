# include <stdio.h>
/** main -entry point.
 * Description - print all combination s of two numbers.
 * Return: 0 for sucess.
 */
int main(void)
{
	int i = 0;
	int j  = 0;

	while (i < 100)
	{
		j  = 0;
		while (j <= 100)
		{
			if(i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(32);
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
			if (i != 98 || j != 99)
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
