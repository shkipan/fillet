/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 21:27:48 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/01 21:29:30 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	char	***tetras;
	char	*buffer;

	if (argc != 2)
		return (1);
	tetras = NULL;
	buffer = reader(argv[1]);
	printf("%s", buffer);
	return (0);
}
