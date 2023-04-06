#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function returns the natural square root of a number
 * @n: input number to calculate the square root
 *
 * Return: result of calcul
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - function returns to find the sqrt of a number
 * @n: number to calculate the sqaure root
 * @i: var iterator
 *
 * Return: result of calcul
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
