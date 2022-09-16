#include "main.h"
/**
 * print_diagonal - start
 * @n: argument
 */
void print_diagonal(int n)
{
	int column, space, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (column = 0; column < n; column++)
		{
			i = column - i;

			for (space = 0; space <= i; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
