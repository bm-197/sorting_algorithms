#include "sort.h"

/**
 * node_swap - swap the two nodes
 * @h: pointer to header
 * @num1: first num to swap
 * @num2: second to swap
 */

void node_swap(listint_t **h, listint_t **num1, listint_t *num2)
{
	(*num1)->next = num2->next;
	if (num2->next != NULL)
		num2->next->prev = *num1;
	num2->prev = (*num1)->prev;
	num2->next = *num1;
	if ((*num1)->prev != NULL)
		(*num1)->prev->next = num2;
	else
		*h = n2;
	(*num1)->prev = num2;
	*num1 = num2->next;
}

/**
 * insertion_sort_list - sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 * @list: the list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list); iter->next != NULL; iter = tmp)
	{
		tmp = iter->next;
		insert = iter->prev;
		while (insert->prev != NULL && insert->n > iter->n)
		{
			node_swap(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}

}
