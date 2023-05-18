#include "search_algos.h"

/**
 * find_index - finds index to start the linear search at
 * @list: node to be evaluated
 * @value: value to search for
 *
 * Return: node to start linear search from
 */
skiplist_t *find_index(skiplist_t *list, int value)
{
	skiplist_t *iter = list->express;

	if (iter == NULL)
	{
		iter = list;
		while (iter->next != NULL)
		{
			iter = iter->next;
		}
		printf("Value found between indexes [%zu] and [%zu]\n",
			list->index, iter->index);
		return (list);
	}

	printf("Value checked at index [%zu] = [%i]\n", iter->index, iter->n);
	if (iter->n >= value)
	{
		printf("Value found between indexes [%zu] and [%zu]\n",
			list->index, iter->index);
		return (list);
	}

	return (find_index(iter, value));
}

/**
 * linear_skip - performs a jump search on a linked list
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: first node where value is located or -1 if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *iter, *end;

	if (list == NULL)
	{
		return (NULL);
	}

	iter = find_index(list, value);

	end = iter->express;
	if (end != NULL)
	{
		end = end->next;
	}

	for (; iter != end; iter = iter->next)
	{
		printf("Value checked at index [%zu] = [%i]\n", iter->index, iter->n);
		if (iter->n == value)
		{
			return (iter);
		}
	}
	return (NULL);
}
