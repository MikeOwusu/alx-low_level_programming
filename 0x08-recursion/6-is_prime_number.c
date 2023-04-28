#include "main.h"
/**
 * check_prime - check if number is prime
 * @n: number to be checked
 * @i: checker
 * Return: result
 */
int check_prime(int n, int i)
{
	if (i < 2 || i % n == 0)
		return (0);
	else if (i > n / 2)
		return (1);
	return (check_prime(n + 1, i));
}
/**
 * is_prime_number - shows integer is prime number of note
 * @n: number to check
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(2, n));
}
