/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full_field.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 18:39:54 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/24 16:44:24 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		g_a = 0;

void	printing(int counter, int k, char **field)
{
	if (counter == k && !(g_a))
	{
		print_field(field);
		g_a = 1;
	}
}

int		iteration(char ***tetras, char **field, int counter, int k)
{
	int flag;
	int i;
	int j;

	flag = 1;
	i = -1;
	while (field[++i])
	{
		j = -1;
		while (field[i][++j])
		{
			if (is_aval(field, tetras[k], i, j) && !(flag = 0))
			{
				place_tetra(field, tetras[k], i, j);
				if (!(full_field(tetras, field)))
				{
					del_tetra(field, k);
					flag = 1;
				}
				else
					counter++;
			}
		}
	}
	return (counter);
}

int		full_field(char ***tetras, char **field)
{
	int k;
	int counter;

	counter = 0;
	k = -1;
	while (tetras[++k])
	{
		if (!(is_put(field, k)))
			counter = iteration(tetras, field, counter, k);
		else
			counter++;
	}
	printing(counter, k, field);
	return (counter == k);
}
