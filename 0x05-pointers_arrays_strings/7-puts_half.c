#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of strings
 * @str:function parameter
 * Return: 0
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int n = (length % 2 == 0) ? length / 2 : (length + 1) / 2;
	int i;

	for (i = n; i < length; i++)
	{
	printf("%c", str[i]);
	}
	printf("\n");
}
