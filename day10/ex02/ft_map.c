#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
	int *return_array;
	int index;

	index = 0;
	return_array = malloc(sizeof(int) * length);
	while (index < length)
	{
		return_array[index] = f(tab[index]);
		index++;
	}
	return(return_array);
}