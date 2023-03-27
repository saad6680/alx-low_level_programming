#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Returns on success 1.
 * on error, -1 in returned, and errno is get appropriately.
 */
int _putchar (char c)
{
return (write (1, &c, 1));
}
