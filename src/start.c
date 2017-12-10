/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 21:27:48 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/10 15:30:44 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	char	***tetras;
	char	**field;
	char	*buffer;
	int		count_tetra;

	if (argc != 2)
	{
		ft_putstr("Usage: ./fillit file_name\n");
		return (0);
	}
	tetras = NULL;
	buffer = reader(argv[1]);
	count_tetra = ft_is_valid(buffer);
	if (!(count_tetra))
	{
		ft_putstr("error\n");
		return (0);
	}
	tetras = make_mem(tetras, count_tetra, buffer);
	int i = 0;
	while (tetras[i])
	{
		if (!(valid_tetramino(tetras[i], ('A' + i))))
		{
			ft_putstr("error\n");
			return (0);
		}
		i++;
	}
	i = 0;
	while (tetras[i])
	{
		tetras[i] = corner_tetra(tetras[i]);
		ft_put_tetramino(tetras[i]);
		i++;
	}
	field = make_field(ft_sqrt(count_tetra));
	place_tetra(field, tetras[0], 0, 0);
	place_tetra(field, tetras[5], 3, 3);
	place_tetra(field, tetras[5], 0, 3);
	print_field(field);
	i = 0;
	int j = 0;
	while (field[i])
	{
		j = 0;
		while (j < field[i][j])
		{
			printf("%d ", isaval(field, tetras[0], i, j));
			j++;
		}
		printf("\n");
		i++;
	}
	place_tetra(field, tetras[2], 1, 0);
	place_tetra(field, tetras[1], 1, 1);
	place_tetra(field, tetras[0], 1, 2);

	free(field);
	free(tetras);
	free(buffer);
	return (0);
}
