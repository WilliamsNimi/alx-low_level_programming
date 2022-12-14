#include <stdio.h>
#include <stdlib.h>
/**
 * fibonacci- This is the fibonacci function
 *
 * Description: This is a function that prints the first 50 fibs
 * @n: The nth element to be calculated
 * Return: Returns the value
 */
int fibonacci(int n)
{
	int loopcounter = n - 2;
	long firstFib = 1;
	long secondFib = 1;
	long newFib = 1;

	printf("%lu,", firstFib);
	printf("%lu,", secondFib);
	for (int i = 0; i < loopcounter; i++)
	{
		newFib = firstFib + secondFib;
		firstFib = secondFib;
		secondFib = newFib;
		printf("%lu,", newFib);
	}
}
/**
 * main- This is the main function
 *
 * Description: This is the main function to print fibs
 * Return: This function returns 0
 */
int main(void)
{
	fibonacci(50);
	return (0);
}
