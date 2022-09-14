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
		if (c == i)
		{
			_putchar ('1');
			break;
		}
		else if (c != i && c == EOF)
		{
			_putchar('0');
		}
	}
	return (0);
}
