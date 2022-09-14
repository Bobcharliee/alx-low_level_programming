#include "main.h"
/**
 * print_last_digit - start
 * @c: argument
 * Return: returns 0
 */
int print_last_digit(int c)
{
	int r;

	r = c % 10;
	if (r < 0)
		r *= -1;
	_putchar('0' + r);
	return (r);
}
