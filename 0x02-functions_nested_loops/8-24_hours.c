#include "main.h"
void jack_bauer(void);
/**
 * jack_bauer - printes every minute of the day of Jack Bauer.
 */
void jack_bauer(void)
{
	int hour;
	int min;

	while (hour <24)
	{
		while (min < 60)
		{
			int fhour = (hour / 10) + 48;
			int fmin = (min / 10) + 48;
			int lhour = (hour % 10) + 48;
			int lmin = (min % 10) + 48;
			putcha(fhour);
			putchar(lhour);
			putchar(59);
			putchar(fmin);
			putchar(lmin);
			putchar('\n');
			min++;
		}
		hour++;
	}
