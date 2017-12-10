/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 21:42:20 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/09 17:53:46 by dskrypny         ###   ########.fr       */
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
				massive[k][i][j] = data[pos];
				pos++;
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
