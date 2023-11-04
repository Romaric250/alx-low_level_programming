#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the interpolation search algorithm.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the first occurrence of `value`, or -1 if `value` is not
 * found or `array` is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t position;

	if (array == NULL)
		return (-1);

	while ((array[right] != array[left]) && (value >= array[left]) && (value <= array[right]))
	{
		position = left + (((double)(right - left) / (array[right] - array[left])) * (value - array[left]));
		printf("Value checked array[%lu] = [%d]\n", position, array[position]);

		if (array[position] < value)
			left = position + 1;
		else if (value < array[position])
			right = position - 1;
		else
			return (position);
	}

	if (value == array[left])
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		return (left);
	}

	position = left + (((double)(right - left) / (array[right] - array[left])) * (value - array[left]));
	printf("Value checked array[%lu] is out of range\n", position);
	return (-1);
}
