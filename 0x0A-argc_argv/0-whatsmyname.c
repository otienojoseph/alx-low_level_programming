#include <stdio.h>
#include <stdlib.h>
/**
 * main - print name followed by a newline
 * Return: success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return EXIT_SUCCESS;
}
