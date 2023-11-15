#include "monty.h"
data_t data = {NULL, NULL, NULL, NULL, 0, 0};
/**
 * Description - entry point for a program that performs stack operations
 * @argc: number of command line args
 * @argv: command line arguments
*/
int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file");
        exit(EXIT_FAILURE);
    }
    data.arg = argv[1];
    parse();

    return (0);
}
