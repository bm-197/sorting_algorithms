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
int partition(int *array, int low, int high)
{
	int pivot_value = array[high];
	int i = low, j;
	for (j = low; j < high; j++)
	{
		if(array[j] <= pivot_value)
		{
			swap(&array[i], &array[j]);
			i++;
		}
	}
	swap(&array[i], &array[j]);
	return i;
}
void quicksort_recursion(int *array, int low, int high)
{
	if (low < high)
	{
		int pivot_index = partition(array, low, high);
		quicksort_recursion(array, low, pivot_index - 1);
		quicksort_recursion(array, pivot_index + 1, high);
	}
}
void quick_sort(int *array, size_t size)
{
	quicksort_recursion(array, 0, size - 1);
}
