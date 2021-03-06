/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full_field.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 18:39:54 by dskrypny          #+#    #+#             */
/*   Updated: 2018/01/10 20:16:15 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*make_check(int count)
{
	int		i;
	char	*used_figur;

	if (!(used_figur = (char*)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	i = 0;
	while (i < count)
	{
		used_figur[i] = '0';
		i++;
	}
	used_figur[i] = '\0';
	return (used_figur);
}

int		check_printed(char *used)
{
	while (*used)
	{
		if (*used == '0')
			return (0);
		used++;
	}
	return (1);
}

void	delete(char **field, int *k, int *flag, char *used_figur)
{
	del_tetra(field, *k);
	*flag = 0;
	used_figur[*k] = '0';
}

int		full_field(char ***tetras, char **field, char *used_figur, int k)
{
	int i;
	int j;
	int flag;

	if (!(tetras[k]))
		return (check_printed(used_figur));
	i = -1;
	flag = 0;
	while (field[++i])
	{
		j = -1;
		while (field[i][++j])
		{
			if (flag == 0 && is_aval(field, tetras[k], i, j))
			{
				flag = 1;
				place_tetra(field, tetras[k], i, j);
				used_figur[k] = '1';
				if (!(full_field(tetras, field, used_figur, k + 1)))
					delete(field, &k, &flag, used_figur);
			}
		}
	}
	return (check_printed(used_figur));
}
