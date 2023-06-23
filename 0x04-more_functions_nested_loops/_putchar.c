#include "main.h"
#include <unistd.h>
/**
 * _isupper - Checks for uppercase character.
 * @c: The character to be checked.
 *
 * Return: On Success 1
 * On error, -1 is returned, and errno is se apprpiately.
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}
