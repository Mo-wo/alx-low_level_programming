#include <stdio.h>

/**
 * main - prints a string to the standard error
 * Description: prints a string to the standard error
 * without using printf or puts
 *
 * Return: 1
 */

int main(void)
{
	fprintf(stderr, "and that piece of art is "
			"useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
