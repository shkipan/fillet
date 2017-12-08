/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_tetramino.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 19:07:21 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/08 20:26:34 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int check_iter(char **tetra, int x, int y, char letter)
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

int valid_tetramino(char **tetra, char letter)
{
    int i;
    int j;
	int	flag;

    i = 0;
	flag = 0;
    while (i < 4)
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
        i++;
    }
    return (1);
}
