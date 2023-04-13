#include <stdlib.h>
#include "main.h"

/**
 * *_memset - Function that fills memory with a constant byte
 * @s: memory area
 * @b: char
 * @n: number
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - Function that allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of the memory
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
