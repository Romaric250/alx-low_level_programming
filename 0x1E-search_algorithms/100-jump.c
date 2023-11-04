#include "search_algos.h"
#include <math.h>

size_t get_min(size_t a, size_t b);

/**
 * get_min - Returns the minimum of two size_t values
 * @a: First value
 * @b: Second value
 *
 * Return: `a` if it is lower or equal to `b`, `b` otherwise
 */
size_t get_min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - Searches for a value in a sorted array of integers using
 * the jump search algorithm
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of `value`, or -1 if `value` is not
 *         found or `array` is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low, high, jump;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	high = 0;

	while (high < size && array[high] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", high, array[high]);
		low = high;
		high += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	for (; low <= get_min(high, size - 1); low++)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}

	return (-1);
}
