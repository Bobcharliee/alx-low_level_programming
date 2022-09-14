#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * Return: returns 1 if lower and 0 if otherwise
 * @c: argument
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c != i && c == '\n')
		{
			_putchar ('0');
		}
		else if (c != i)
			continue;
		_putchar('1');
	}
	return (0);
}
