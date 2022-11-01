#include "search_algos.h"

/**
 * linear_search - function to linearly search an array
 * @array: pointer to the first element of the array to search
 * @size: size of the array
 * @value: value to be searched for
 * Return: -1 if Null or index of value
 */

int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
	for (int i = 0; i < size; i++)
	{
		printf("Value checked array[i] = [%d]\n", array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
