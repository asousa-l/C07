
#include <stdlib.h>
#include <stdio.h>


int	*ft_ultimate_range(int **range, int min, int max)
{
	int	last;
	int	i;
	int	*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	last = max - min -1;
	if ((buffer = malloc(last * sizeof(int))) == NULL)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	while (i <= last)
	{
		buffer[i] = min + i;
		i++;
	}
	return (last + 1);
}
/*
void	debug_dump_array(int numbers[], int size)
{
	int index;

	printf("[ ");
	index = 0;
	while (index < size)
	{
		printf("%d", numbers[index]);
		if (index != size - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf(" ]");
}

int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	bound;

	min = 5;
	max = 10;
	bound = ft_ultimate_range(&range, min, max);
	printf("min = %d, max = %d -> (bound = %d) ", min, max, bound);
	fflush(stdout);
	debug_dump_array(range, bound + 2);
}*/