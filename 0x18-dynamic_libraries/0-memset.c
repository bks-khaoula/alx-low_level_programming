#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the address of buffe
 * @b: nwe value we want to write
 * @n: how much we want to print 'b'.
 *
 * Return: a pointer to the memory
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
