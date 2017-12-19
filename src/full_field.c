/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full_field.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 18:39:54 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/19 18:17:05 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		full_field(char ***tetras, char **field)
{
	int k;
	int i;
	int j;
	int counter;
	int	flag;

	counter = 0;
	k = 0;
	while (tetras[k])
	{
		if (!(is_put(field, k)))
		{
			flag = 1;
			i = 0;
			while (field[i])
			{
				j = 0;
				while (field[i][j])
				{
					if (is_aval(field, tetras[k], i, j) && flag)
					{
						place_tetra(field, tetras[k], i, j);
						flag = 0;
						if (!(full_field(tetras, field)))
							del_tetra(field, k);
						else
							counter++;
					}
					j++;
				}
				i++;
			}
		}
		else
			counter++;
		k++;
	}
	return (counter == k);
}
