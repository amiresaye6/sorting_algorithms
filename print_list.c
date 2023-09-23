#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}

/**
 * sort_list_check - checks for correct sorting
 *
 * @list: The list to be checked
*/
void sort_list_check(listint_t *list)
{
	listint_t *head;
	int flag = 0;

	head = list;

	while (head)
	{
		if (head->n > head->next->n)
			flag++;
		head = head->next;
	}
	if (flag == 0)
	{
		printf("list sorted correctly )\n");
		return;
	}
	printf("%d errors :(\n", flag);
}
