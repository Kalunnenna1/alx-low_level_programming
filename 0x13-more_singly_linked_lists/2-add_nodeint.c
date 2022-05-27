#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *@head: A pointer to the first element in the list
 *@n: a new node to insert
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}


