#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - function that concat n bytes of a string to another string
 * @s1: string
 * @s2: string
 * @n: number of bytes from s2 to concat to s1
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		s = malloc(sizeof(char) * (length1 + n + 1));
	else
		s = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!s)
		return (NULL);

	while (i < length1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < length2 && i < (length1 + n))
		s[i++] = s2[j++];

	while (n >= length2 && i < (length1 + length2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
