#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main- This is the main function
 *
 * Description: This program multiplies 2 integers
 * @argc: the length of arguments passed to the program
 * @argv: the list of arguments passed to the program
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
