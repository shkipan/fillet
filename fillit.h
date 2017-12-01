/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:56:23 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/01 21:30:38 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUF_SIZE 525
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*reader(char *file_name);

char    ***create(char ***massive);
int     ft_is_valid(char **figure);
void    ft_put_tetramino(char **field);
void    ft_putchar(char c);

#endif
