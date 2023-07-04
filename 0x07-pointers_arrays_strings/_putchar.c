#include "main.h"
/**
 * _putchar - writes a character to the standard output
 * @c: the character to be written
 *
 * Return: On success 1
 * On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}


/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the character to fill the memory with
 * @n: the number of bytes to be filled
 *
 * Return: void
 */
void _memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
}
