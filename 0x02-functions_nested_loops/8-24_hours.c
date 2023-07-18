#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: o for success
 */
void jack_bauer(void)
{
	int hr1;
	int hr2;
	int min1;
	int min2;

	for (hr1 = 48; hr1 <= 50; hr1++)
	{
		for (hr2 = 48; hr2 <= 57; hr2++)
		{
			for (min1 = 48; min1 <= 53; min1++)
			{
				for (min2 = 48; min2 <= 57; min2++)
				{
					_putchar(hr1);
					_putchar(hr2);
					_putchar(':');
					_putchar(min1);
					_putchar(min2);
					_putchar('\n');
					if (hr1 == 50 && hr2 == 51 && min1 == 53 && min2 == 57)
						break;
				}
				if (hr1 == 50 && hr2 == 51 && min1 == 53 && min2 == 57)
					break;
			}
			if (hr1 == 50 && hr2 == 51 && min1 == 53 && min2 == 57)
				break;
		}
		if (hr1 == 50 && hr2 == 51 && min1 == 53 && min2 == 57)
			break;
	}
}
