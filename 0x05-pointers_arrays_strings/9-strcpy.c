#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the terminating null byte,
 *           to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
char *ptr = dest;

while (*src)
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (ptr);
}
