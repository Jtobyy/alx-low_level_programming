#include "search_algos.h"


/**
 * binary_search - searches for a value in an
 * array of integers using the Binary search algorithm
 * @array: Pointer to the first element of the array to
 * serach in
 * @size: Size of elements in the array
 * @value: Value to search for
 * array is sorted in ascending order
 * value won't appear more than once
 * Return: The index where the value is located
 * or -1 if array is NULL or value is not present
 */
int binary_search(int *array, size_t size, int value)
{
	int j;
	int cur;
	int L;
	int R;

	L = 0;
	R = size - 1;
	if (L > R)
		return (-1);
	while (L <= R)
	{
		printf("Searching in array: ");
		for (j = L; j < R + 1; j++)
		{
			if (j == R)
				printf("%d\n", array[j]);
			else
				printf("%d, ", array[j]);
		}
		cur = (L + R) / 2;
		if (array[cur] == value)
			return (cur);
		else if (array[cur] < value)
			L = cur + 1;
		else if (array[cur] > value)
			R = cur - 1;
	}
	return (-1);
}
