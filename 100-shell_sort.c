#include "sort.h"

/**
 * shell_sort - Sort the array using shell sort algorithm
 * @array: the array to be sorted
 * @size: The size of the array
 */

void shell_sort(int *array, size_t size)
{
	int h = 1, j;

	while (h < size)
	{
		h =  3*h + 1;
	}

	while (h > 0)
	{
		for (int i = h; i < n; i++)
		{
			int pivot = array[i];
			j = i;
			while (j >= h && array[j - h] > pivot)
			{
				a[j] = a[j-h];
				j = j - h;
			}
			a[j - h]=pivot;
			print_array(array, size);
		}
		h = h/3;
	}
}
