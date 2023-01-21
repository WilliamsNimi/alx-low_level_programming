#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main- this is the main function
 * Description: This function is the main function & acts as a calculator screen
 * @argc: The number of arguments supplied
 * @argv: The list of arguments
 * Return: Returns 0
 */
int main(int argc, char *argv[])
{
	int operand1, operand2;
	char *operator;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2];
	operand1 = atoi(argv[1]);
	operand2 = atoi(argv[3]);

	operation = get_op_func(operator);
	printf("%d\n", operation(operand1, operand2));
	return (0);
}
