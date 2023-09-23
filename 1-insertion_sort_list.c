#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending order
 * using the Insertion sort algorithm
 *
 * @list: The list to be printed
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *sorted, *curr, *next, *aux, *temp;

    sorted = NULL;
    curr = *list;

    while (curr != NULL)
    {
        next = curr->next;
/*if it is the first node or it is sorted untel the next continue*/
        if (sorted == NULL || sorted->n > curr->n)
        {
            curr->next = sorted;
            sorted = curr;
        }
        else
        {
            aux = sorted;

            while (aux->next != NULL && aux->next->n <= curr->n)
                aux = aux->next;

            if (aux->next == NULL)
            {
                aux->next = curr;
                curr->prev = aux;
                curr->next = NULL;
            }
            else
            {
                temp = aux->next;
                aux->next = curr;
                curr->prev = aux;
                curr->next = temp;
                temp->prev = curr;
            }


        }

        curr = next;
    }

    *list = sorted;
}
