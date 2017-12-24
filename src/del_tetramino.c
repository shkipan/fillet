/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_tetramino.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 18:47:50 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/13 18:49:29 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	del_tetra(char **field, int index)
{
	int i;
	int j;

	i = 0;
	while (field[i])
	{
		j = 0;
		while (field[i][j])
		{
			if (field[i][j] - 'A' == index)
				field[i][j] = '.';
			j++;
		}
		i++;
	}
}
