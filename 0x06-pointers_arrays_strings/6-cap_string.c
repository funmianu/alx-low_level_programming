#include "main.h"
#include <stdbool.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
int i;
bool capitalize_next = true;
char separators[] = " \t\n,;.!?\"(){}";

for (i = 0; str[i] != '\0'; i++)
{
if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}

capitalize_next = false;

if (strchr(separators, str[i]) != NULL)
{
capitalize_next = true;
}
}

return (str);
}

