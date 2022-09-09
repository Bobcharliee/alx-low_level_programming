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

	printf("Size of a char: %lu byte(s)", sizeof(c));
	printf("Size of an int: %lu byte(s)", sizeof(j));
	printf("Size of a long int: %lu byte(s)", sizeof(k));
	printf("Size of a long long int: %lu byte(s)", sizeof(l));
	printf("Size of a float: %lu byte(s)", sizeof(m));
	return (0);
}
