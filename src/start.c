/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 21:27:48 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/29 13:10:16 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	recursion(int count_tetra, char ***tetras)
{
	int		size;
	char	**field;
	char	*used_figur;

	size = ft_sqrt(count_tetra);
	field = make_field(size);
	used_figur = make_check(count_tetra);
	while (!(full_field(tetras, field, used_figur, 0)))
	{
		size++;
		purifier(field);
		field = make_field(size);
	}
	print_field(field);
}

int		solving(int count_tetra, char *buffer)
{
	char	***tetras;
	int		i;

	tetras = NULL;
	tetras = make_mem(tetras, count_tetra, buffer);
	i = -1;
	while (tetras[++i])
		if (!(valid_tetramino(tetras[i], ('A' + i))))
		{
			ft_putstr("error\n");
			return (0);
		}
	i = -1;
	while (tetras[++i])
		tetras[i] = corner_tetra(tetras[i]);
	recursion(count_tetra, tetras);
	return (0);
}

int		main(int argc, char **argv)
{
	char	*buffer;
	int		count_tetra;

	if (argc != 2)
	{
		ft_putstr("Usage: ./fillit file_name\n");
		return (0);
	}
	buffer = reader(argv[1]);
	count_tetra = ft_is_valid(buffer);
	if (!(count_tetra))
	{
		ft_putstr("error\n");
		return (0);
	}
	solving(count_tetra, buffer);
	return (0);
}
