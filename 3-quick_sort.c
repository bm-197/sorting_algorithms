#include "sort.h"

/**
 * quick_sort - sort a given array using quick sort algorithm.
 *
 * @array: the to array to be sorted
 * @size: the size of the array
 */

void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int partition(int *array, size_t size, int low, int high)
{
	int pivot_value = array[high];
	int i = low, j;
	for (j = low; j < high; j++)
	{
		if(array[j] <= pivot_value)
		{
			if (i < j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[i] > pivot_value)
	{
		swap(&array[i], &array[j]);
		print_array(array, size);
	}
	return i;
}
void quicksort_recursion(int *array, size_t size, int low, int high)
{
	if (low < high)
	{
		int pivot_index = partition(array, size, low, high);
		quicksort_recursion(array, size, low, pivot_index - 1);
		quicksort_recursion(array, size, pivot_index + 1, high);
	}
}
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort_recursion(array, size, 0, size - 1);
}
