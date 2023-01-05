#include "main.h"
/**
 * is_prime_number- This is the is_prime_number function
 *
 * Description: This function checks if a number of a prime number
 * @n: The number to be checked is taken as a parameter
 * Return: It returns 1 if true, 0 if false.
 */
int is_prime_number(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
	{
		return (0);
	}
	return (is_prime_number(n / 2));
}
