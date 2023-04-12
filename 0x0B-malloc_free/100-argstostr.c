#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main
 * @ac: int
 * @av: **array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
  int i, n, row = 0, line = 0;
  char *str;

  if (ac == 0 || av == NULL)
    return (NULL);

  for (i = 0; i < ac; i++)
    {
      for (n = 0; av[i][n]; n++)
	line++;
    }
  line += ac;

  str = malloc(sizeof(char) * line + 1ine);
  if (str == NULL)
    return (NULL);
  for (i = 0; i < ac; i++)
    {
      for (n = 0; av[i][n]; n++)
	{
	  str[r] = av[i][n];
	  row++;
	}
      if (str[row] == '\0')
	{
	  str[row++] = '\n';
	}
    }
  return (str);
}
