#include "sort.h"

/**
 * bubble_sort - sorts a given array of integer using bubble sort algorithm
 * array: the array to be sorted
 * size: the size of the array
 */
/*
void swap(*a, *b);

void swap(*a, *b);
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
*/
void bubble_sort(int *array, size_t size)
{
	int flag, tmp;
	size_t len = size;

	for (size_t i = 0; i < len; i++)
	{
		flag = 0;
		for (size_t j = 0; j < len - 1 - i; j++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i+1];
				array[i+1] = tmp;	
				print_array(array, size);
				flag = 1;
			}
			if (flag = 0)
				break;
		}
	}
}
