#include <stdio.h>
#include "main.h"
/**
 * print_times_table- This is the times Table function
 *
 * Description: This function prints the times table based on request
 * @n: Number of times table to be printed
 * Return: returns nothing
 */
void print_times_table(int n)
{
	int outCount, j;

	if (n <= 15 && n != 0)
	{
		for (outCount = 0; outCount <= n; outCount++)
		{
			for (j = 0; j <= n; j++)
			{
				if ((outCount * j) < 10 && (outCount * j) != 0)
					printf("   ");
				else if ((outCount * j) != 0 && (outCount * j) < 100)
					printf("  ");
				else if ((outCount * j) >= 100)
					printf(" ");
				printf("%d", outCount * j);
				if (j < n)
					printf(",");
				if ((outCount * j) == 0 && (outCount * (j + 1)) == 0)
					if (j < n)
						printf("   ");
			}
			printf("\n");
		}
	}
	else if (n == 0)
		printf("%d\n", 0);
}
