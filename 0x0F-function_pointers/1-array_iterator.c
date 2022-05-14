#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function pointer on each element of an array
 *@array: array of integer
 *@size: size of array
 *@action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}


