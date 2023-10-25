#include "sort.h"

/**
 * selection_sort - selection sort algorithm
 *
 * @array: given array to be sorted
 * @size: size of the array to be sorted
 */

void selection_sort(int *array, size_t size)
{
	int k = 0, j, val, n;

	n = (int)size;
	if (size < 2)
		return;
	while (k < n)
	{
		i = k;
		j = i + 1;
		if (array[i] > array[j])
		{
			val = array[j]
			array[j] = array[i]
			array[i] = val;
			i++;
		}
		k++;
	}
}
