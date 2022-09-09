#include <stdio.h>
/**
 * main - program starts
 * Return: returns zero
 */
int main(void)
{
	char c;
	int j;
	long int k;
	long long int l;
	float m;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(j));
	printf("Size of a long int: %lu byte(s)\n", sizeof(k));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a float: %lu byte(s)\n", sizeof(m));
	return (0);
}
