#include <stdio.h>
#include <stdlib.h>
/**
 * natural- This is the natural function
 *
 * Description: This is a function that sums natural numbers multiples of 3 & 5
 * Return: It returns nothing
 */
void natural()
{
	int counter = 1;
	int sum = 0;

	while (counter < 1024)
	{
		if ((counter % 3 == 0) || (counter % 5 == 0))
		{
			sum += counter;
		}
	}
	printf("%d\n", sum);
}
/**
 * main- This is the main function
 *
 *Description: Plain old main
 *Return: Returns 0
 */
int main(void)
{
	natural();
	return (0);
}
