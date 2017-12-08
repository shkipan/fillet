/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_field.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 20:29:57 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/08 20:35:04 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_field(char **field)
{
	int i;
	int j;

	i = 0;
	while (field[i])
	{
		j = 0;
		while (field[i][j])
		{
			ft_putchar(field[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
