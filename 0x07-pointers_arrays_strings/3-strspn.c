#include "main.h"

/**
 * _strspn -Entry point
 * @s: Input
 * @accept: Input
 *
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int match;

while (*s)
{
match = 0;
while (*accept)
{
if (*s == *accept)
{
count++;
match = 1;
break;
}
accept++;
}
if (match == 0)
break;
s++;
accept = accept - count;
}
return (count);
}
