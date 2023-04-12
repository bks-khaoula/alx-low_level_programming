#include <stdlib.h>
#include "main.h"

/**
 * count_word - function that count the number of words in a string
 * @s: string
 * Return: number words
 */
int count_word(char *s)
{
	int var, count, word;

	var = 0;
	word = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == ' ')
			var = 0;
		else if (var == 0)
		{
			var = 1;
			word++;
		}
	}

	return (word);
}
/**
 * **strtow - function that splits a string into words
 * @str: string
 * Return: array of strings or NULL
 */
char **strtow(char *str)
{
	char **matrix, *temp;
	int i, k = 0, len = 0, words, counter = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (counter)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (counter + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				matrix[k] = temp - counter;
				k++;
				counter = 0;
			}
		}
		else if (counter++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
