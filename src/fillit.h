/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 21:33:40 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/10 15:08:38 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUF_SIZE 525
# include <stdlib.h>
# include <unistd.h>
#include <stdio.h>

char	*reader(char *file_name);

char	***fill_mas(char ***massive, char *data);
char	***make_mem(char ***massive, int count, char *data);
char	**make_field(int x);
char	**fill_field(char **field, int x);
int		valid_tetramino(char **tetra, char letter);
int		ft_is_valid(char *str);
void	ft_put_tetramino(char **tetra);
void	print_field(char **field);
int		ft_sqrt(int n);
void	ft_putstr(char *s);
void	ft_putchar(char c);
char	**corner_tetra(char **tetra);
void	place_tetra(char **field, char **tetra, int x, int y);
int		isaval(char **field, char **tetra, int x, int y);

#endif
