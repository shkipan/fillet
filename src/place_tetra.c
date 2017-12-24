/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_tetra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 18:16:34 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/10 17:00:33 by mhrashch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

void	place_tetra(char **field, char **tetra, int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tetra[i][j] != '.')
				field[i + x][j + y] = tetra[i][j];
			j++;
		}
		i++;
	}
}
