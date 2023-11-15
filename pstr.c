#include "monty.h"

/**
 * _pstr - string value of the entire stack
 * @stack: stack head
 * @line_number: line number of instructon in monty file
 * Return: Nothing
*/

void _pstr(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	while (*stack)
	{
		if ((*stack)->n >= 65 && (*stack)->n <= 122)
		{
			fprintf(stdout, "%c", (*stack)->n);
			*stack = (*stack)->next;
		}
		else
		{
			break;
		}
	}
	return;
}
