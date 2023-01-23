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
	char *word;

	if (n <= 0)
		printf("\n");
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		word = va_arg(list, char *);
		if (i < (n - 1))
		{
			if (separator != NULL)
			{
				if (word != NULL)
				{
					printf("%s%s", word, separator);
				}
				else
					printf("%s%s", "(nil)", separator);
			}
			else
			{
				if (word != NULL)
				{
					printf("%s", word);
				}
				else
					printf("%s", "(nil)");
			}
		}
		else
		{
			if (word != NULL)
				printf("%s\n", word);
			else
				printf("%s\n", "(nil)");
		}
	}
	va_end(list);
}
