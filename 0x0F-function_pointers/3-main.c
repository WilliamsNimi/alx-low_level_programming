#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main- this is the main function
 * Description: This function is the main function and acts as a calculator screen
 * @argc: The number of arguments supplied
 * @argv: The list of arguments
 * Return: Returns 0
 */
int main(int argc, char *argv[])
{
	int operand1, operand2;
	char operator;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	operand1 = atoi(argv[1]);
	operand2 = atoi(argv[2]);

	get_op_func(operator);
}
