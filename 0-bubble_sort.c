#include "sort.h"

/**
 * bubble_sort - performs bubble sort algorithm on given array
 *
 * @array: array to be sorted
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	int i = 0, val, flag;

	if (size < 2)
		return;
	while ((size_t)i < size)
	{
		val = array[i];
		flag = 0;
		while ((size_t)i < size - 1)
		{
			if (val > array[i + 1])
			{
				flag = 1;
				val = array[i];
				array[i] = array[i + 1];
				array[i + 1] = val;
				print_array(array, size);
			}
			i++;
		}
		if (flag == 0)
			return;
		i = 0;
	}
}
