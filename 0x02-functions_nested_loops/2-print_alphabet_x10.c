#include "main.h"
/**
 * print_alphabet_x10 - print a to z
 */
void print_alphabet_x10(void)
{
	char letters;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
		_putchar('\n');
	}
}
