#include <stdio.h>
#include <stdlib.h>
/**
 * evenfibonacci- This is the evenfibonacci function
 *
 * Description: This function prints the sum of even fibs below 4Million
 * Return: Returns nothing
 */
void evenfibonacci(void)
{
	long firstFib = 1;
	long secondFib = 1;
	long newFib = 1;
	long sum = 0;

        newFib = firstFib + secondFib;
	while (newFib < 4000000)
	{
		if (newFib % 2 == 0)
		{
			sum += newFib;
		}
		newFib = firstFib + secondFib;
		firstFib = secondFib;
		secondFib = newFib;
	}
	printf("%lu\n", sum);
}
/**
 * main- This is the main function
 *
 * Description: This is the main function to print fibs
 * Return: This function returns 0
 */
int main(void)
{
	evenfibonacci();
	return (0);
}
