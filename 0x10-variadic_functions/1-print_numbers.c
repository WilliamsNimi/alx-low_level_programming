#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers- This is the print numbers function
 * Description: This function prints numbers with a separator variadically
 * @separator: This is the separator
 * @n: Number of numbers passed
 * Return: Returns nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (i < (n-1) && separator != NULL)
		{
			printf("%d%s", va_arg(list, int), separator);
		}
		else
			printf("%d\n", va_arg(list, int));
	}
	va_end(list);
}
