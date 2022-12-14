#include <stdio.h>
#include "main.h"
/**
 * times_table- This is the times Table function
 *
 * Description: This function prints the timestable
 * Return: returns nothing
 */
void times_table(void)
{
	int outCount;
	int counter;

	for (outCount = 0; outCount < 9; outCount++)
	{
		counter = 0;
		printf("%d, ", 0);
		for (int j = 0; j < 8; j++)
		{
			counter = j + j;
			printf("%d, ", counter);
		}
		printf("\n");
	}
}
int main(void)
{
	times_table();
	return (0);
}
