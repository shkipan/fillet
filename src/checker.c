/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/24 15:31:00 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/26 19:31:48 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_is_valid(char *str)
{
	int i;
	int x;
	int ch;

	i = -1;
	x = 0;
	ch = 0;
	while (i++ >= -1 && *(str + i))
	{
		ch += (*(str + i) == '#') ? 1 : 0;
		if (*(str + i) != '.' && *(str + i) != '#')
		{
			if (*(str + i) != '\n')
				return (0);
			if (((i + 1) % 21 != 0) && ((i + 1 - x) % 5 != 0))
				return (0);
			if (((i + 1) % 21 == 0) && (x++ >= -1))
			{
				if (ch != 4)
					return (0);
				ch = 0;
			}
		}
	}
	return ((((x * 21) == i) && (x < 26)) ? x : 0);
}

int		is_aval(char **field, char **tetra, int x, int y)
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
				if ((x + i) >= count || (y + j) >= count)
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

int		check_iter(char **tetra, int x, int y, char letter)
{
	tetra[x][y] = letter;
	if ((y < 3) && tetra[x][y + 1] == '#')
		check_iter(tetra, x, y + 1, letter);
	if ((x < 3) && tetra[x + 1][y] == '#')
		check_iter(tetra, x + 1, y, letter);
	if ((y > 0) && tetra[x][y - 1] == '#')
		check_iter(tetra, x, y - 1, letter);
	if ((x > 0) && tetra[x - 1][y] == '#')
		check_iter(tetra, x - 1, y, letter);
	return (1);
}

int		valid_tetramino(char **tetra, char letter)
{
	int	i;
	int	j;
	int	flag;

	i = -1;
	flag = 0;
	while (++i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tetra[i][j] == '#')
			{
				if (flag == 0)
				{
					check_iter(tetra, i, j, letter);
					flag = 1;
				}
				else
					return (0);
			}
			j++;
		}
	}
	return (1);
}
