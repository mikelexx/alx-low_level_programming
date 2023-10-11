#include "main.h"
void jack_bauer(void);
/**
 * jack_bauer - printes every minute of the day of Jack Bauer.
 */
void jack_bauer(void)
{
	int hour;
	int min;

	hour = 0;

	while (hour < 24)
	{
		min = 0;
		while (min < 60)
		{
			int fhour = (hour / 10) + 48;
			int fmin = (min / 10) + 48;
			int lhour = (hour % 10) + 48;
			int lmin = (min % 10) + 48;

			_putchar(fhour);
			_putchar(lhour);
			_putchar(58);
			_putchar(fmin);
			_putchar(lmin);
			_putchar('\n');
			min++;
		}
		hour++;
	}
}
