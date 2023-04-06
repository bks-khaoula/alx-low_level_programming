#include "main.h"
/**
 * _strlen_recursion - function returns the length of a string
 * @s: variable string
 * Return: number -  length of the variable s
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
