#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: the int array
 * @size: the array size
 * @cmp: the compare function
 *
 * Return: the integer index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	while (i < size)
	{
	if (cmp(array[i]))
	return (1);
	i++;
	}
return (-1);
}
