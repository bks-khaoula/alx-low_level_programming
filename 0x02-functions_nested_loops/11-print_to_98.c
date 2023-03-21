#include <stdio.h>
/**
 * print_to_98 - fonction
 * Return: rien
 * @n: parametre
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}

	if (n == 98)
	{
		printf("%d\n", n);
	}
}
