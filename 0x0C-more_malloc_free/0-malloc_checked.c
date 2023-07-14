#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
* malloc_checked - allocates memory
* @b: int
* Return: pointer to the array initialized or NULL
*/

void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == 0)
	exit(98);

	return (m);
}
