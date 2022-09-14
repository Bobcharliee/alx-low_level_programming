#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * Return: returns 1 if lower and 0 if otherwise
 * @c: argument
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
