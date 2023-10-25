#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - selection sort algorithm
 *
 * @array: given array to be sorted
 * @size: size of the array to be sorted
 */

void selection_sort(int *array, size_t size)
{
	int i = 0, j = 0, val, n;

	n = (int)size;
	if (size < 2)
		return;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (array[i] > array[j])
			{
				val = array[i];
				array[i] = array[j];
				array[j] = val;
			}
			j++;
		}
		print_array(array, size);
		i++;
	}
}
