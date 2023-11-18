#include "monty.h"

/**
 * _sub - subtracts the top two stacks;
 * @stack: stack head
 * @line_number: line number of instructon in monty file
 * Return: Nothing
*/

void _sub(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	tmp = *stack;
	if (tmp == NULL || tmp->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		fclose(data.file);
		exit(EXIT_FAILURE);
	}
	tmp->next->n -= tmp->n;
	*stack = tmp->next;
	free(tmp);
}
