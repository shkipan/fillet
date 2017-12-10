/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_available.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 13:37:47 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/10 15:30:55 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		isaval(char **field, char **tetra, int x, int y)
{
	int i;
	int j;
	int count;

	count = 0;
	while (field[count])
		count++;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tetra[i][j] != '.')
			{
				if ( (x + i) >= count || (y + j) >= count)
				   return (0);	
				if (field[i + x][j + y] != '.')
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
