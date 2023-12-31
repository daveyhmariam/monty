#include "monty.h"

/**
 * _pint - print the top of the stack
 * @stack: stack head
 * @line_number: the line number on monty file
 * Return: Nothing
*/

void _pint(stack_t **stack, unsigned int line_number)
{
	if ((*stack))
	{
		fprintf(stdout, "%d\n", ((*stack)->n));
	}
	else
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		fclose(data.file);
		exit(EXIT_FAILURE);
	}

}
