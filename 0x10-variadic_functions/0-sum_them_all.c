#include <stdarg.h>
/**
 * sum_them_all- This is the sum them all function
 * Description: This function sums all the integers fed to it
 * @n: the integers to be added
 * Return: Returns 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	va_start(ap, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
