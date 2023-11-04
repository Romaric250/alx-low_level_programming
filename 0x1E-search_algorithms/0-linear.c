#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t z;

	if (array == NULL)
	{
		return (-1);
	}

	for (z = 0; z < size; z++)
	{
		printf("Value checked array[%li] = [%i]\n", z, array[z]);
		if (array[z] == value)
		{
			return (z);
		}
	}
	return (-1);
}
