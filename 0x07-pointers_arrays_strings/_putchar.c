#include <unistd.h>

/**
 * _putchar - writes the character c to the standard output
 * @c: the character to be written
 *
 * Return: On success 1
 * On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
