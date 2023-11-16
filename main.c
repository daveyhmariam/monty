#include "monty.h"
data_t data = {NULL, NULL, NULL, NULL, 0, 0};
/**
 * main - entry for program
 * Description - entry point for a program that performs stack operations
 * @argc: number of command line args
 * @argv: command line arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc < 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	for (i = 1; i < argc; i++)
	{
		data.arg = argv[i];
		parse();
	}
	
	return (0);
}
