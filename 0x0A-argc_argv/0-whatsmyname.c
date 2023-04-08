#include <stdio.h>
#include "main.h"

/**
 * main - function that prints the name of the program
 * @argc: Var number of arguments
 * @argv: Var array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%x\n", *argv);

	return (0);
}
