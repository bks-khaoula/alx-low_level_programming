#include "main.h"
/**
 * _puts_recursion - function prints a string;
 * @x: variable input
 * Return: Always return 0 
 */
void _puts_recursion(char *x)
{
	if (*x)
	{
		_putchar(*x);
		_puts_recursion(x + 1);
	}

	else
		_putchar('\n');
}
