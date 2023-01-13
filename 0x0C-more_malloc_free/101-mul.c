#include <stdlib.h>
#include <stdio.h>
/**
 * main- This is the main function
 * Description: This function multiplies 2 numbers
 * @argc: Length of the arguments
 * @argv: The argument list
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (atoi(argv[1]) && atoi(argv[2]))
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
