#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main- This is the main function
 *
 * Description: This program checks if a number is 0, positive or negative
 * Return: This function returns 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero", n);
	return (0);
}
