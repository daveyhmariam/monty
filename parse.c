#include "monty.h"
/**
 * parse - tokenizes argument in monty and calls opcode
 * Return: Nothing
*/
void parse(void)
{
	char *line, getline[255], *opcode;
	int size = 1024;
	int idx = 0;
	instruction_t instruct[] = {
	{"push", _push}, {"pall", _pall}, {"pint", _pint}, {"pop", _pop},
	{"swap", _swap}, {"add", _add}, {"nop", _nop}, {"sub", _sub},
	{"div", _div}, {"mul", _mul}, {"mod", _mod}, {"pchar", _pchar},
	{"pstr", _pstr}, {"rotl", _rotl}, {"rotr", _rotr}, {"#", _nop},
	{"stack", _stack}, {"queue", _queue}, {NULL, NULL}
};

	data.line_number = 0;
	data.file = fopen(data.arg, "r");
	if (!data.file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", data.arg);
		fclose(data.file);
		exit(EXIT_FAILURE);
	}
	line = fgets(getline, size, data.file);
	opcode = strtok(line, " \n");
	while (1)
	{
		idx = 0;
		data.line_number++;
		while (opcode && instruct[idx].opcode)
		{
			if (strcmp(opcode, instruct[idx].opcode) == 0)
			{
				data.data = strtok(NULL, " \n");
				instruct[idx].f(&data.stack, data.line_number);
				break;
			}
			else if (instruct[idx].opcode == NULL)
			{
				fprintf(stderr, "L%d: unknown instruction %s\n", data.line_number, opcode);
				fclose(data.file);
				exit(EXIT_FAILURE);
			}
			else
			idx++;
		}
		line = fgets(getline, size, data.file);
		if (line == NULL)
			break;
		opcode = strtok(line, " \n");
	}
	fclose(data.file);
	freelist();
}
