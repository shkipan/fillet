/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:53:12 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/01 21:41:40 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readheader.h"
#include "fillit.h"

char	*reader(char *file_name)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];
	char	*res;
	int		i;

	ret = 0;
	if ((fd = open(file_name, O_RDONLY)) != -1)
	{
		ret = read(fd, buf, BUF_SIZE);
		buf[ret++] = '\n';
		buf[ret] = '\0';
	}
	res = (char *)malloc(sizeof(char) * ret);
	i = 0;
	while (i <= ret)
	{
		res[i] = buf[i];
		i++;
	}
	return (res);
}
