/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 02:25:55 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/30 18:35:25 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str++) != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;
	int		k;
	int		c;

	i = 0;
	k = 0;
	c = 1;
	while (i < size)
		c += ft_strlen(strs[i++]) + ft_strlen(sep);
	tab = malloc(sizeof(char *) * c);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			tab[k++] = strs[i][j++];
		j = 0;
		while ((sep[j] != '\0') && (i < size -1))
			tab[k++] = sep[j++];
		i++;
	}
	tab[k] = '\0';
	return (tab);
}
/*
int	main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;

	strs = (char **)malloc(4 * sizeof(strs));
	strs[0] = "lol";
	strs[1] = "1234";
	strs[2] = "poiuic";
	strs[3] = "1234";
	separator = "";
	index = 0;
	while (index < 4)
	{
		result = ft_strjoin(index, strs, separator);
		printf("result with size = %d : $%s$\n", index, result);
		free(result);
		index++;
	}
}*/