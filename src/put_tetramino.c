/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tetramino.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:41:38 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/08 21:21:58 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void  ft_put_tetramino(char **tetra)
{
  int i;
  int j;

  i = 0;
  while (i < 4) {
    j = 0;
    while (j < 5)
    {
      ft_putchar(tetra[i][j]);
      j++;
    }
	ft_putchar('\n');
    i++;
  }
}
