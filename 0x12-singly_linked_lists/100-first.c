#include "lists.h"
#include <stdio.h>

/**
 * first - Print string before function execution
 * Return: void
 */
void __attribute__((constructor)) first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
