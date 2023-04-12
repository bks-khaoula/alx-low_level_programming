#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Function that duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *x;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	x = malloc(sizeof(char) * (i + 1));

	if (x == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
	        x[j] = str[j];

	return (x);
}
