/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 21:42:20 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/24 15:33:49 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	***fill_mas(char ***massive, char *data)
{
	int i;
	int j;
	int k;
	int	pos;

	pos = 0;
	k = 0;
	while (data[pos])
	{
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				massive[k][i][j] = data[pos++];
				j++;
			}
			i++;
			pos++;
		}
		pos++;
		k++;
	}
	return (massive);
}

char	**fill_field(char **field, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			field[i][j] = '.';
			j++;
		}
		i++;
	}
	return (field);
}
