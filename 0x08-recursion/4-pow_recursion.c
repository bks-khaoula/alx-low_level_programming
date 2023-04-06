#include "main.h"

/**
 * _pow_recursion - function returns the value of x raised to the pow of y
 * @x: initial value
 * @y: variable power
 *
 * Return: result of pow recursion
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
