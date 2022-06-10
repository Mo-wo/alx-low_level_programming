#include <stdio.h>

/**
 * main - prints the size of various types
 * on the computer it is compiled and run on
 *
 * Description: declares all the various
 * types and outputs their sizes using printf
 *
 * Return: 0
 */

int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float e;
	double f;

	printf("Size of an int: %lu byte(s)\n", sizeof(a));
	printf("Size of a char: %lu byte(s)\n", sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(e));
	printf("Size of a double: %lu byte(s)\n", sizeof(f));
	return (0);
}
