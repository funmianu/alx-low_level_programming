#include <stdio.h>
#include "main.h"

/**
 * simple_print_buffer - Prints a buffer
 * @buffer: The buffer to be printed
 * @size: The size of the buffer
 *
 * Return: Nothing
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;

for (i = 0; i < size; i++)
{
if (i % 10)
{
printf(" ");
}
if (!(i % 10) && i)
{
printf("\n");
}
printf("0x%02x", buffer[i]);
}
printf("\n");
}

int main(void)
{
char buffer[98] = "Hello, World! This is a buffer.";
simple_print_buffer(buffer, 98);
return (0);
}
