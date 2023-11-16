#include "monty.h"

/**
 * _pint - print the top of the stack
 * @stack: stack head
 * @line_number: the line number on monty file
 * Return: Nothing
*/

void _pint(stack_t **stack, unsigned int line_number)
{
	if (data.data != NULL)
	{
		fprintf(stderr, "L%u: usage: pint\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack))
	{
		fprintf(stdout, "%d\n", ((*stack)->n));
	}
	else
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

}
