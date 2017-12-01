/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creator.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 19:43:20 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/01 20:37:51 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char    ***make_mem(char ***massive, int n)
{
  int i;
  int k;

  k = 0;
  if (!(massive = (char ***)malloc(sizeof(char **) * n)))
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
  return (massive);
}
