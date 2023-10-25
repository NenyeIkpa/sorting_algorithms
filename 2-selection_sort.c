#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - selection sort algorithm
 *
 * Description: the idx at which the minimum value
 * is found is noted and comparison continued until
 * the entire array has been traversed. if the minimum
 * index at the end of the loop is not the same as the start index,
 * the values found at both indices are swapped.
 *
 * @array: given array to be sorted
 * @size: size of the array to be sorted
 */

void selection_sort(int *array, size_t size)
{
	int i = 0, j = 0, idx_min, val, n;

	n = (int)size;
	if (size < 2)
		return;
	while (i < n - 1)
	{
		idx_min = i;
		j = i + 1;
		while (j < n)
		{
			if (array[idx_min] > array[j])
			{
				idx_min = j;
			}
			j++;
		}
		if (idx_min != i)
		{
			val = array[i];
			array[i] = array[idx_min];
			array[idx_min] = val;
			print_array(array, size);
		}
		i++;
	}
}
