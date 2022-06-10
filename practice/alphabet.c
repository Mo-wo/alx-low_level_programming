#include <stdio.h>

/**
 * main - a program that prints alphabets in lower and uppercase
 * Description: the main program prints lowercase and uppercase
 * alphabets using putchar
 * return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 122; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 90; ch++)
		putchar(ch);

	putchar('\n');
	return (0);

}
