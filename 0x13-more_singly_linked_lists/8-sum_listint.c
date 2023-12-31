#include "lists.h"
/**
 * sum_listint - sum all the data(n) of listin_t
 * @head: first node
 * Return: the sum of all the dat(n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
