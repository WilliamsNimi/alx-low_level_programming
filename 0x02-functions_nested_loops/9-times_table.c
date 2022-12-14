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
	int outCount, j;

	for (outCount = 0; outCount <= 9; outCount++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d", outCount * j);
			if (!(outCount == 9 && j == 9))
				printf(",");
			if ((outCount * j) < 10)
				printf("  ");
			else
				printf(" ");
		}
		printf("\n");
	}
}
