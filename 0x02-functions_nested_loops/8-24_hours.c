#include "main.h"
/**
 * jack_bauer - start
 */
void jack_bauer(void)
{
	int min;
	int sec;

	for (min = 0; min < 24; min++)
	{
		for (sec = 0; sec < 60; sec++)
		{
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n')
		}
	}
}
