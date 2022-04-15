#include"main.h"

/**
 * prints numbers from - print 0 - 9 with a new line
 *                       using _putchar twice 
 *
 * Return: Return: Always 0 (Success)
 */

void print_numbers(void);
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}


