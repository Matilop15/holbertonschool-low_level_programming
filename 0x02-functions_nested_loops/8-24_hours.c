#include "main.h"
/**
  *jack_bauer - no idea que es
  *
  * no hay return
  */

void jack_bauer(void)
{
	int hour, h, min, seg;

	for (hour = 0 ; hour <= 2 ; hour++)
	{
		for (h = 0 ; h <= 3 ; h++)
		{
			for (min = 0 ; min <= 5 ; min++)
			{
				for (seg = 0 ; seg <= 9 ; seg++)
				{
				
					_putchar('0' + hour);
					_putchar('0' + h);
					_putchar(':');
					_putchar('0' + min);
					_putchar('0' + seg);
					_putchar('\n');
				}
			}
		}
	}
}
