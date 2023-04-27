#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Function frees a linked list
 * @head: list_t list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
