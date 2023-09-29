#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap
 * @b: The second integer to swap
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * shell_sort - Sort the array using shell sort algorithm
 * @array: the array to be sorted
 * @size: The size of the array
 */

void shell_sort(int *array, size_t size)
{
	size_t h = 1, j, i;

	while (h < size)
	{
		h =  3*h + 1;
	}

	while (h > 0)
	{
		for (i = h; i < size; i++)
		{
			j = i;
			while (j >= h && array[j - h] > pivot)
			{
				swap_ints(arrat[j], array[j - h]);
			}
		}
		print_array(array, size);

		h = h/3;
	}
}
