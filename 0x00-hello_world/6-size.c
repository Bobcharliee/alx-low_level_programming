#include <stdio.h>
int main(void)
{
	char c;
	int j;
	long int k;
	long long int l;
	float m;

	printf("Size of a char: %c byte(s)", sizeof(c));
	printf("Size of an int: %i byte(s)", sizeof(j));
	printf("Size of a long int: %c byte(s)", sizeof(k));
	printf("Size of a long long int: %c byte(s)", sizeof(l));
	printf("Size of a float: %c byte(s)", sizeof(m));
	return (0);
}
