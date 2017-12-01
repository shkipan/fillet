/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:56:23 by dskrypny          #+#    #+#             */
/*   Updated: 2017/12/01 18:56:51 by dskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void    fill(char **letter);
char    ***create(char ***massive);
int     ft_is_valid(char **figure);
void    ft_put_tetramino(char **field);
void    ft_putchar(char c);

#endif
