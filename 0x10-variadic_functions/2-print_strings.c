#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Funct that prints strings, followed by a string.
 * @separator: The string to separae numbers
 * @n: The number of strings
 * @...: A variable number of strings
 * Description: If separator is NULL nothing happen or if string is nil is printed.
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
  va_list strings;
  char *str;
  unsigned int index;

  va_start(strings, n);

  for (index = 0; index < n; index++)
    {
      str = va_arg(strings, char *);

      if (str == NULL)
	printf("(nil)");
      else
	printf("%s", str);

      if (index != (n - 1) && separator != NULL)
	printf("%s", separator);
    }

  printf("\n");

  va_end(strings);
}
