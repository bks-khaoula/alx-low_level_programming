#include "main.h"
#include <stddef.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to search about
 * @accept: string with only acceptable char
 *
 * Return: counts how many characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a = accept;

	while (*s)
	{
		while (*a && (*a != *s))
			a++;
		if (*a == '\0')
			return (count);
		a = accept;
		count++;
		s++;
	}
	return (count);
}
