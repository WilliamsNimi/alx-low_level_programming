#include <stdio.h>
#include <stdlib.h>
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
	int a, b;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
	}
	printf("%d\n", (a * b));
	return (0);
}
