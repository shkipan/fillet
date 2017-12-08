/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 21:27:48 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/08 21:34:27 by dskrypny         ###   ########.fr       */
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
		return (1);
	tetras = NULL;
	buffer = reader(argv[1]);
	count_tetra = ft_is_valid(buffer);
	if (!(count_tetra))
		return (1);
	tetras = make_mem(tetras, count_tetra, buffer);
	int i = 0;
	while (tetras[i])
	{
		ft_put_tetramino(tetras[i]);
		ft_putchar('\n');
		i++;
	}
	field = make_field(5);
	print_field(field);
	free(field);
	free(tetras);
	free(buffer);
	return (0);
}
