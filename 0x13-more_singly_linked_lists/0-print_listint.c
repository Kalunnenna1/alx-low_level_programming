#include <stdio.h>
#include <stdlib.h>
#inlcude "lists.h"

/**
 * print_listint - a function that prints all the elements of list
 * @h: linked list of type listint_t to print
 * Return: return the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (num);
}

