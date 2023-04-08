#include <stdio.h>
#include "main.h"

/**
 * main - Function that prints all arguments it receives
 * @argc: number of args
 * @argv: array of args
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}

	return (0);
}
