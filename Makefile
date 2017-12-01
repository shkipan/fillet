# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/19 15:39:00 by dskrypny          #+#    #+#              #
#    Updated: 2017/12/01 19:35:48 by dskrypny         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = *.c

OBJECTS = *.o

NAME = fillit

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS)  $(SOURCE) 
	gcc $(OBJECTS) -o $(NAME)

clean:
	 rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
