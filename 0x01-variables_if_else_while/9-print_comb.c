#include <stdio.h>
/**
 * main - start
 * Return: return 0
 */
int main(void)
{
	int a;

	for(a = 0; a < 10; a++)
		putchar((a % 10) + '0');
	putchar(',');
	putchar('\n');
	return (0);
}
