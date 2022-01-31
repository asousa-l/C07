/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:34:52 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/30 18:34:56 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_ultimate_range(int **range, int min, int max)
{
	int	last;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	last = max - min - 1;
	*range = malloc(last * sizeof(int));
	if (!*range)
	{
		return (-1);
	}
	i = 0;
	while (i <= last)
	{
		*range[i] = min + i;
		i++;
	}
	return (i);
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
