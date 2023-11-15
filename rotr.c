#include "monty.h"

/**
 * _rotr - rotate the stack one bit to the bottom
 * @stack: stack head
 * @line_number: line number of instructon in monty file
 * Return: Nothing
*/

void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	(void) line_number;
	if (*stack == NULL)
		return;
	tmp = *stack;

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *stack;
	(*stack)->prev = tmp;
	tmp->prev->next = NULL;
	tmp->prev = NULL;
	*stack = tmp;
}
