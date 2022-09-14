#include "main.h"
#include <type.h>
/**
 * isalpha - start
 * @c: argument
 * Return: returns 0 or 1
 */
int _isalpha(int c)
{
	int i = isalpha(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
