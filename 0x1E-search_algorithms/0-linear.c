#include "search_algos.h"


/**
 * linear_search - searches for a value in an
 * array of integers using the Linear search algorithm
 * @array: Pointer to the first element of the array to
 * serach in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located
 * or -1 if array is NULL or value is not present
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
