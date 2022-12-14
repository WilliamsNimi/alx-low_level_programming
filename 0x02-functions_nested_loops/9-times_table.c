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
			if ((outCount * j) < 10 && (outCount * j) != 0)
				printf("  ");
			else if ((outCount * j) != 0)
				printf(" ");
			printf("%d", outCount * j);
			if (j < 9)
				printf(",");
			if ((outCount * j) == 0 && (outCount * (j + 1)) == 0)
				if (j < 9)
					printf("  ");
		}
		printf("\n");
	}
}
