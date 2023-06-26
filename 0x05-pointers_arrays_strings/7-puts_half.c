#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
int length = 0;

while (str[length] != '\0')
length++;

return (length);
}

/**
 * puts_half - Prints half of a string.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
int length = _strlen(str);
int start = (length - 1) / 2;
int i;

for (i = start; i < length; i++)
_putchar(str[i]);

_putchar('\n');
}
