#include <stdio.h>
/**
 * main - start
 * Return: return 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (i == j)
				continue;
			putchar(i + '0');
			putchar(j + '0');
			if (j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

