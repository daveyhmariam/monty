#include "monty.h"

/**
 * _stack -  switches mod to stack
 * @stack: stack head
 * @line_number: line number of instructon in monty file
 * Return: Nothing
*/
void _stack(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;

	data.swch = 0;
}

/**
 * _queue -  switches mod to queue
 * @stack: stack head
 * @line_number: line number of instructon in monty file
 * Return: Nothing
*/
void _queue(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;

	data.swch = 1;
}
