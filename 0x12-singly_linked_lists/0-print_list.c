#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Singly linked list.
 * Return: Number of elements in the list.
 */

size_t print_list(const list_t *h)
{
size_t cont = 0;

while (h)
{
if (h->str)
printf("[%u] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
cont++;
h = h->next;
}

return (nelem);
}
