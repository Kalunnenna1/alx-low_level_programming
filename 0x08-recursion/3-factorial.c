#include "main.h"

/**
 * factorial - main - returns the factorial of a given number
 * @n: number of factorial
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n == 0) /*Base condition*/
	{
		return (1);
	}
	else if (n < 0) /*Base condition*/
		return (-1);
	else
		return (n * factorial(n - 1)); /*Recursive call*/
}
