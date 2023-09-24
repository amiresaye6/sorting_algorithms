#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integersin
 * ascending orderusing the Insertion sort algorithm
 *
 * @list: The list to be printed
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	int swap = 0;

	current = list[0];

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (1)
	{
		swap = 0;
		current = list[0];
		while (current)
		{
			if (current->next && current->n > current->next->n)
			{
				current = swap_nodes(current);
				if (current->prev == NULL)
				{
					list[0] = current;
				}
				swap = 1;
				print_list(*list);
				break;
			}
			current = current->next;
		}
		if (swap == 0)
			return;
	}
}
/**
 * swap_nodes - swap 2 nodes
 * @node1: the node1
 *
 * Return: the first node.
 */
listint_t *swap_nodes(listint_t *node1)
{
	listint_t *node2 = node1->next;

	/**
	 * node1 : first node.
	 */
	if (node1->prev == NULL)
	{
		node1->next = node2->next;
		node2->next->prev = node1;

		node1->prev = node2;
		node2->next = node1;
		node2->prev = NULL;
	}
	else if (node2->next == NULL)
	{
		node2->prev = node1->prev;
		node1->next = NULL;
		node1->prev->next = node2;
		node1->prev = node2;
		node2->next = node1;
	}
	else
	{
		node1->next = node2->next;
		node2->next->prev = node1;

		node1->prev->next = node2;
		node2->prev = node1->prev;

		node2->next = node1;

		node1->prev = node2;
	}
	return (node2);
}
