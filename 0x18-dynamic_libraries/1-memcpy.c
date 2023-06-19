#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: buffer + 50
 * @src : i want to copy n from src to dest
 * @n: bytes i want to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr_d = dest;
	char *ptr_s = src;

	for (i = 0; i < n; i++)
	{
		*(ptr_d + i) = *(ptr_s + i);
	}
	return (dest);
}
