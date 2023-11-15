#include "monty.h"

/**
 * _pchar - ascii value of top of the stack;
 * @stack: stack head
 * @line_number: line number of instructon in monty file
 * Return: Nothing
*/

void _pchar(stack_t **stack, unsigned int line_number)
{
	if (!(*stack))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		fclose(data.file);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 65 || (*stack)->n > 122)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		fclose(data.file);
		exit(EXIT_FAILURE);
	}

	fprintf(stdout, "%c\n", (*stack)->n);
}
