#include "main.h"
/**
 * _abs - start
 * @a: argument
 * Return: returns 0
 */
int _abs(int a)
{
	int b;

	if (a >= 0)
		return (a);
	b = (a * (-1));
	return (b);
}
