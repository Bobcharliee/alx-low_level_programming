#include "main.h"
/**
 * print_alphabet_x10 - print a to z
 */
void print_alphabet_x10(void)
{
	char letters = 'a';
	int n;
	
	n = 0;
	while (n < 10)
	{
		while (letters <= 'z')
		{
			_putchar(letters);
			letters++;
		}
		_putchar('\n');
		n++;
	}
}
