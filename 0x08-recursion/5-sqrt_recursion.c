#include "main.h"

/**
 * sqrt_m - main - check the code
 * @m: number
 * @n: number of power
 * Return: Always 0.
 */

int sqrt_m(int m, int n)
{
	if (n * n == m)
	{
		return (m);
	}
	else if (n * n > m)
	{
		return (-1);
	}
	return (sqrt_m(m, n + 1));
}

/**
 * _sqrt_recursion - main - check the code
 * @n: number
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_m(n, 0));
}
