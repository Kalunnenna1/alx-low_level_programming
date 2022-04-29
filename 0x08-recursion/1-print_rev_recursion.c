3include "main.h"
/**
 * _print_rev_recursion - main - prints a string in reverse
 * @s: character of a string
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s) /*if statement*/
	{
		_print_rev_recursion(s + 1); /*add s*/
		_putchar(*s); /*print s*/
	}
}
