#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @num: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of the number
 */
long int largest_prime_factor(long int num)
{
long int i, largest_factor;

largest_factor = -1;

// Divide by 2 until the number is no longer divisible by 2
while (num % 2 == 0)
{
largest_factor = 2;
num /= 2;
}
// Check for prime factors starting from 3
for (i = 3; i <= sqrt(num); i += 2)
{
while (num % i == 0)
{
largest_factor = i;
num /= i;
}
}

// If the remaining number is greater than 2, it is the largest prime factor
if (num > 2)
largest_factor = num;

return largest_factor;
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
long int number = 612852475143;
long int largest_prime;

largest_prime = largest_prime_factor(number);

printf("%ld\n", largest_prime);

return 0;
}
