#include <stdlib.h>
#include "lists.h"

/** list _len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return : number of elements in h
 */
size_t list_len(const list_h *h)
{
	size_t = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
