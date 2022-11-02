#include "main.h"

int check_prime(int num, int div);
int is_prime_number(int n);

/**
 * is_prime_number - prime identifier
 * @n: is number
 * Return: integer
 */
int is_prime_number(int n);
{
	return (check_prime(num, 1));
}

/**
 * check_prime - Checks if a number is divisible
 * @num: The number to be checked
 * @div: The divisor
 * Return: If the number is divisible - 0
 * If the number is not divisible - 1
 */
int check_prime(int num, int div)
{
	if (num <= 1)
		return (0);

	if (num % div == 0 && div > 1)
		return (0);

	if ((num / div) < div)
		return (1);

	return (check_prime(num, div + 1));
}
