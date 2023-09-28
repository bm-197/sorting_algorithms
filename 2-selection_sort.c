#include "sort.h"

/**
 * swap_nums - Swaping two given numbers inside an array
 *
 * @num1: first number to swap
 * @num2: second number to swap
 */

void swap_nums(int *num1, int *num2)
{
	int tmp;

	tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 *
 * @array: The array to be sorted
 * @size: The size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		if (min != i)
		{
			swap_nums(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
