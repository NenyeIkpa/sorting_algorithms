#include "sort.h"
#include <stdio.h>

listint_t *is_lower(listint_t *curr, listint_t *next, listint_t **list);

/**
 * insertion_sort_list - sorts a list using the
 * insertion sort technique
 *
 * @list: given (doubly) linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *res;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = *list;
	while (current->next != NULL)
	{
		res = is_lower(current, current->next, list);
		current = res->next;
	}
}



/**
 * is_lower - compares n values is list and swaps
 * until n is arranged in ascending order
 *
 * Description: nodes are swapped during sorting (not
 * values placed in nodes)
 *
 * @curr: current node in list
 * @nxt: next node in list
 * @list: pointer to doubly linked list
 *
 * Return: pointer to curr
 */

listint_t *is_lower(listint_t *curr, listint_t *nxt, listint_t **list)
{
	listint_t *temp;

	while (curr != NULL)
	{
		temp = curr;
		if ((nxt->n) < (curr->n))
		{
			curr->prev->next = nxt;
			curr->next = nxt->next;
			nxt->next = temp->next;
			print_list(*list);
			is_lower((curr->prev), curr, list);
		}
		return (curr);
	}
	return (curr);
}
