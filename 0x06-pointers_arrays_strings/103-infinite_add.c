#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, carry, digit_sum;

i = 0;
j = 0;
carry = 0;
while (n1[i] != '\0')
i++;
while (n2[j] != '\0')
j++;
if (i >= size_r || j >= size_r)
return (0);

k = 0;
while (i > 0 || j > 0 || carry)
{
digit_sum = carry;

if (i > 0)
digit_sum += n1[--i] - '0';

if (j > 0)
digit_sum += n2[--j] - '0';

carry = digit_sum / 10;
r[k++] = (digit_sum % 10) + '0';
}

r[k] = '\0';
for (i = 0, j = k - 1; i < j; i++, j--)
{
char temp = r[i];
r[i] = r[j];
r[j] = temp;
}
return (r);
}
