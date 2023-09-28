#include "sort.h"

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
			int pivot = array[i];
			j = i;
			while (j >= h && array[j - h] > pivot)
			{
				array[j] = array[j-h];
				j = j - h;
			}
			array[j - h]=pivot;
			print_array(array, size);
		}
		h = h/3;
	}
}
