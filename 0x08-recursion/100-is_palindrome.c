#include "main.h"

int check_pal(char *s, int i, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function checks if a string is a palindrome
 * @s: input string
 * Return: return 1 if it is, 0 it is not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function returns the length of a string
 * @s: input string
 * Return: string's length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - function checks palindrome
 * @s: input string to check
 * @i: iterator
 * @length: string's length
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (check_pal(s, i + 1, length - 1));
}
