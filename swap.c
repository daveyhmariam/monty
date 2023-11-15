#include "monty.h"

/**
 * _swap - swap the top two stacks;
 * @stack: stack head
 * @line_number: line number of instructon in monty file
 * Return: Nothing
*/

void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *tmp2;

	tmp = *stack;
	if (tmp)
		if (tmp->next == NULL)
			{
				fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
				fclose(data.file);
				exit(EXIT_FAILURE);
			}
	tmp2 = tmp->next;
	tmp->next = tmp2->next;
	tmp2->next = tmp2->prev;
	tmp2->prev = NULL;
	tmp->prev = tmp2;
	tmp->next->prev = tmp;
	*stack = tmp2;
	return;
}
