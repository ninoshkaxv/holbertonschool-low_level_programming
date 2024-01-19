#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches value in array using Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located, or -1 if not present
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	for (size_t i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
