#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int a[5] = {98, 198, 298, 398, 498};
int *p;

p = a;

*(p + 2) = 98; /* Add this line */

printf("a[2] = %d\n", a[2]);

return (0);
}
