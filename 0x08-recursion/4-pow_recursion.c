#include "main.h"
/**
 * _pow_recursion - functions that returna value of x raised to power of y
 * @x: interger
 * @y: integer\
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0) /*Base condition*/
	{
		return (-1);
	}

	else if (y != 0)
		return (x * _pow_recursion(x, y - 1)); /* Recursive call*/

	else
		return (1);
}
