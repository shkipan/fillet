/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corner_tetra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 12:35:30 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/24 15:47:40 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**reserve_tetra(void)
{
	int		i;
	char	**res;

	if (!(res = (char **)malloc(sizeof(char *) * 5)))
		return (NULL);
	i = 0;
	while (i < 4)
	{
		if (!(res[i] = (char *)malloc(sizeof(char) * 5)))
			return (NULL);
		res[i][4] = '\0';
		i++;
	}
	res[i] = NULL;
	return (res);
}

char	**move(char **tetra, int pos_i, int pos_j)
{
	char	**res;
	int		i;
	int		j;

	res = reserve_tetra();
	i = 0;
	while (tetra[i])
	{
		j = 0;
		while ((i < 4) && (j < 4))
		{
			if ((i + pos_i < 4) && (j + pos_j < 4))
				res[i][j] = tetra[i + pos_i][j + pos_j];
			else
				res[i][j] = '.';
			j++;
		}
		i++;
	}
	purifier(tetra);
	return (res);
}

char	**corner_tetra(char **tetra)
{
	int		pos_i;
	int		pos_j;
	int		i;
	int		j;

	i = 0;
	pos_i = 4;
	pos_j = 4;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tetra[i][j] != '.' && i < pos_i)
				pos_i = i;
			if (tetra[i][j] != '.' && j < pos_j)
				pos_j = j;
			j++;
		}
		i++;
	}
	tetra = move(tetra, pos_i, pos_j);
	return (tetra);
}
