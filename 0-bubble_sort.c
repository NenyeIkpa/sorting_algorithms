#include "sort.h"

/**
 * bubble_sort - performs bubble sort algorithm on given array
 *
 * @array: array to be sorted
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	int i = 0, val, n, flag;

	if (size < 2)
		return;
	n = (int)size;
	while (i < n)
	{
		flag = 0;
		val = 0;
		while (i < n - 1)
		{
			if (array[i] > array[i + 1])
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
