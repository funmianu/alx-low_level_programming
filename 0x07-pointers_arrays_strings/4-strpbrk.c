#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to search
 * @accept: pointer to the string of bytes to search for
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *temp_accept = accept;
while (*temp_accept)
{
if (*s == *temp_accept)
return (s);
temp_accept++;
}
s++;
}
return (NULL);
}
