#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings- This is the print_strings function
 * Description: This function prints strings with a separator variadically
 * @separator: This is the separator
 * @n: Number of numbers passed
 * Return: Returns nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
		{
			if (separator != NULL)
			{
				if (va_arg(list, char *) != NULL)
				{
					printf("%s%s", va_arg(list, char *), separator);
				}
				else
				  printf("%s%s", "(nil)", separator);
			}
			else
			{
				if (va_arg(list, char *) != NULL)
				{
					printf("%s", va_arg(list, char *));
				}
				else
					printf("%s", "(nil)");
			}
		}
		else
		{
			if (va_arg(list, char *) != NULL)
				printf("%s\n", va_arg(list, char *));
			else
				printf("%s\n", "(nil)");
		}
	}
	va_end(list);
}
