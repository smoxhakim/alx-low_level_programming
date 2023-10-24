#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: a pointer to the head of the list
 * @index: the index of the node, starting at 0
 * Return: a pointer to the nth node, or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}

