#include "main.h"
/**
 * times_table - start
 */
void times_table(void)
{
	int num;
	int mult, prod;

	for (num = 0; num <= 9; ++num)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; ++mult)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				putchar(' ');
			else
				_putchar((prod / 10) + 48);
			putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
