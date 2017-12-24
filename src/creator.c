/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creator_copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 13:50:18 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/10 14:13:19 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	***make_mem(char ***massive, int n, char *data)
{
	int i;
	int k;

	k = 0;
	if (!(massive = (char ***)malloc(sizeof(char **) * (n + 1))))
		return (NULL);
	while (k < n)
	{
		if (!(massive[k] = (char **)malloc(sizeof(char *) * 5)))
			return (NULL);
		i = 0;
		while (i < 4)
		{
			if (!(massive[k][i] = (char *)malloc(sizeof(char) * 6)))
				return (NULL);
			i++;
		}
		k++;
	}
	massive[k] = NULL;
	massive = fill_mas(massive, data);
	return (massive);
}

char	**make_field(int x)
{
	int		i;
	char	**res;

	if (!(res = (char **)malloc(sizeof(char *) * (x + 1))))
		return (NULL);
	i = 0;
	while (i < x)
	{
		if (!(res[i] = (char *)malloc(sizeof(char) * (x + 1))))
			return (NULL);
		i++;
	}
	res[i] = NULL;
	res = fill_field(res, x);
	return (res);
}
