#include "sort.h"

/**
 * swap_nums - Swaping two given number inside an array
 * 
 * @num1: fist number to swap
 * @num2: the second number to swap
 */

void swap_nums(int *num1, int *num2)
{
	int tmp;

	tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: The array to sort
 * @size: The size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, len = size;
	int flag;

	for (i = 0; i < len; i++)
	{
		flag = 0;
		for (j = 0; j< len - 1 -i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_nums(&array[j], &array[j + 1]);
				print_array(array, size);
				flag = 1;
			}
			if (flag == 0)
				break;
		}
	}
}
