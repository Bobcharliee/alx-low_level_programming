#include "main.h"
/**
 * print_alphabet - printa a to z
 */
void print_alphabet(void)
{
	char letters = 'a';
	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}
	_putchar('\n');
}
