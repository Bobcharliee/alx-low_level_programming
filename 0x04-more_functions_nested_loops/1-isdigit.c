#include "main.h"
/**
 * _isdigit - start
 * @value: argument
 * Return: always 0
 */
int _isdigit(int value)
{
	if (value >= '0' && value <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
