#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the length of a string
 * Description: stringlen computes the length of a string
 * using a while loop and iterating over the provided string.
 * @str: char *s is the parameter for the stringlen function
 * Return: length of the computer string
 */

int stringlen(char *str);

char *stringcpy(char *dest, char *src);

void *_memcpy(void *dest, void *src, int n);

int _strcmp(char *X, char *Y);

char *_strcat(char *s1, char *s2);

char *_strdup(char *str);

char *_strchr(char *str, int chr);

int main(void)
{

	char str[40] = "I will like to find t in this string";


	printf("%s\n", _strchr(str, 'n'));

}

/**
 * stringlen - prints the length of a string
 * Description: stringlen computes the length of a string
 * using a while loop and iterating over the provided string.
 * @str: char *s is the parameter for the stringlen function
 * Return: length of the computed string
 */

int stringlen(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	return (length);
}

/**
 * stringcpy - a function to copy one string value to another
 * Description: copies each character from the source string
 * to the destination string taking into account the null value
 * at the end of strings
 * @src: the source string
 * @dest: destination string
 * Return: the function returns the destination string
 */


char *stringcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * _memcpy - that copies content from src to a dest in memory
 * Description: _memcpy runs using a for loop to copy from one memory
 * address to another
 * @dest: the source memory content
 * @src: the destination memory content
 * @n: the size of memory to be used for copying
 * Return: a pointer to the destimation address
 */

void *_memcpy(void *dest, void *src, int n)
{

	if (dest == NULL)
		return (NULL);

	char *char_dest = (char *) dest;

	char *char_src = (char *) src;

	for (int i = 0; i < n; i++)
	{
	char_dest[i] = char_src[i];
	}

	return (dest);
}

/**
 * _strcmp -  a function that compares two strings for equality in value
 * Description: the _strcmp function returns an integer greater than,
 * equal to, or less than zero, when the string pointed to by one string
 * is greater than, equal to, or less than the string
 * pointed to by another string
 * @X: pointer to first string
 * @Y: pointer to second string
 * Return: an interger
*/

int _strcmp(char *X, char *Y)
{
	while ((*X != '\0' && *Y != '\0') && *X == *Y)
	{
		X++;
		Y++;
	}

	if (*X == '\0' && *Y == '\0')
	{
		return (0);
	}
	else if (*X > *Y)
	{
		return (1);
	}
	else if (*X < *Y)
	{
		return (-1);
	}

	return (0);
}

/**
 * _strcat - a functions that concatenates two strings
 * Description: _strcat function concatenates the strings by copying
 * the original string to a pointer
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: pointer to the duplicated string
 */

char *_strcat(char *s1, char *s2)
{
	char *dup = s1;

	while (*dup != '\0')
	{
		dup++;
	}
	while (*s2 != '\0')
	{
		*dup++ = *s2++;
	}

	*dup = '\0';
	return (s1);
}

/**
 * _strdup - a function that duplicates a string
 * @str: string to be duplicated
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *new = malloc(stringlen(str) + 1);

	int i = 0;

	if (str == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		new[i] = str[i];
		i++;
	}

	new[i] = '\0';

	return (new);

	free(new);
}

/**
 * _strchr - a function that finds the first occurrence
 * of given character in a given string
 * Description:  _strchr finds the character and
 * returns a pointer to the character or NULL if not found
 *@str: given string to search
 *@chr: character to be searched for
 * Return: pointer to the character if found else it returns NULL
*/

char *_strchr(char *str, int chr)
{
	do {
		if (*str == chr)
			return (str);
	} while (*str++);

	return (0);
}
