#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: index of the first element found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = -1;
	if (size <= 0 || !(array) || !(cmp))
		return (-1);
	while (++i < size)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
/**
#include <stdlib.h>
#include <function_pointers.h>

**
 * int_index - function that searches for an integer
 * @array: input array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: int
 *

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != 0 && cmp != 0)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}	
	* If element not found *
	return (-1);
}
**/
