#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - checks if an integer is a prime number or it is not
 * @n: variable prime number
 *
 * Return: returns 1 if n is a prime number, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calcul a number is prime recursively
 * @n: number
 * @i: iterator
 *
 * Return: 1 if n is p, 0 if it is not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
