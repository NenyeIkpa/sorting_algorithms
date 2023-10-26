#include "sort.h"

void partition_sort(int *array, int lowerbound, int upperbound);

/**
 * quick_sort - quick sort algorithm
 *
 * @array: given array
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	partition_sort(array, 0, (int)size - 1);
}

/**
 * partition_sort - sorts an array based on a pivot point
 *
 * @array: given array;
 * @lowerbound: sort/comparison lower point
 * @upperbound: sort/comparison upper point
 */

void partition_sort(int *array, int lowerbound, int upperbound)
{
	int pivot = 0;
	int start = 0, end = 0, val = 0;

	if (lowerbound < upperbound)
	{
		pivot = lowerbound;
		start = lowerbound;
		end = upperbound;
		while (start < end)
		{
			while (array[start] <= array[pivot])
				start++;
			while (array[end] > array[pivot])
				end--;
			if (start < end)
			{
				val = array[start];
				array[start] = array[end];
				array[end] = val;
			}
		}
		val = array[lowerbound];
		array[lowerbound] = array[end];
		array[end] = val;
		print_array(array, (size_t)upperbound + 1);
		partition_sort(array, lowerbound, end - 1);
		partition_sort(array, end + 1, upperbound);
	}
}
