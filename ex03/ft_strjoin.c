/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 02:25:55 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/27 02:45:52 by asousa-l         ###   ########.fr       */
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
	j = 0;
	k = 0;
	c = 1;
	while (i < size)
		c += ft_strlen(strs[i++]) + ft_strlen(sep);
	tab = malloc(sizeof(char *) * c);
	i = 0;
	while (i < size)
	{
		while (strs[i][j])
			tab[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size -1)
			tab[n++] = sep[j++];
		j = 0;
	}
	tab[k] = '\0';
	return (tab);
}
