#include <stdio.h>

/**
 * main: entry point
 * return; always 0
 */

int main(void)
{
	int int_type;
	char char_type;
	float float_type;
	double double_type;
	long int longint_type;
	short int shortint_type;

	long double longdouble_type;
	unsigned char unsignedchar_type;
	signed char signedchar_type;
	signed int signedint_type;
	unsigned int unsignedint_type;

	printf("size of int is = %zu bytes\n", sizeof(int_type));
	printf("size of char is = %zu byte\n", sizeof(char_type));
	printf("size of float is = %zu bytes\n", sizeof(float_type));
	/**printf("size of double is = %zu byte\n\n\n", double_type);
	printf("size of longint is = %zu byte\n", longint_type);
	printf("size of shortint is = %zu byte\n", shortint_type);
	printf("size of longdouble is = %zu byte\n\n\n", longdouble_type);
	printf("size of unsigned char is = %zu byte\n", unsignedchar_type);
	printf("size of signed char is = %zu byte\n", signedchar_type);
	printf("size of signed int is = %zu byte\n", signedint_type);
	printf("size of unsigned int is = %zu byte\n", unsignedint_type);*/
}

