/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/24 15:27:26 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/24 15:30:15 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

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
