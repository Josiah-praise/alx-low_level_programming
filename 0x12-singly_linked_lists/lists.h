#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_t - a struct list_t
 * @next: pointer to the next node
 * @len: length of str
 * @str: string
 */
typedef struct  list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t;

void free_list(list_t *head);
int __attribute__((constructor)) init(void);
	size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
#endif /*_MAIN_H*/
