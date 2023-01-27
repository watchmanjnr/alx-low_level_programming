#include <stdlib.h>
#include "lists.h"

/**
  * free_list - Realease the memory allocated for a list.
  * @head: The pointer to the first node of the list to free
  *
  * Return: Nothing
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
