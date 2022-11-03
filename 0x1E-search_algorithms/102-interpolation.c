#include "search_algos.h"

/**
 * interpolation_search - function to search for a value  in an array
 * similar to binary search but uses a formula
 * @array: array to be searched through
 * @size: length of the array
 * @value: value to be searched for
 * Return: value if found or -1 if array is null or value not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0;
	size_t hi = size - 1;
	size_t pos = lo + (((double)(hi - lo) / (array[hi] - array[lo]))
			* (value - array[lo]));

	if (array == NULL || size == 0)
		return (-1);

	/*
	 * pos = lo + (((double)(hi - lo) / (array[hi] - array[lo]))
			* (value - array[lo]));
			*/

	while (pos < size)
	{
		printf("Value checked array [%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			lo = pos + 1;
		else
			hi = pos - 1;
		pos = lo + (((double)(hi - lo) / (array[hi] - array[lo]))
				* (value - array[lo]));
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
