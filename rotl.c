#include "monty.h"

/**
 * _rotl - rotate the stack one bit to the top
 * @stack: stack head
 * @line_number: line number of instructon in monty file
 * Return: Nothing
*/

void _rotl(stack_t **stack, unsigned int line_number)
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
	(*stack)->next->prev = NULL;
	*stack = (*stack)->next;
	tmp->next->next = NULL;
}
