#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * Return: returns 1 if lower and 0 if otherwise
 */
int _islower(int c)
{
	char i;
	char a = '0';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			a = '1';
			break;
		}	
	}
	if (a == '0')
		_putchar('0');
	else
		_putchar('1');
	return (0);	
}
