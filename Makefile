# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/19 15:39:00 by dskrypny          #+#    #+#              #
#    Updated: 2017/12/09 14:39:39 by dskrypny         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME =		fillit

SOURCE =	./src/*.c
OBJECTS =	*.o

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SOURCE) 
	gcc $(OBJECTS) -o $(NAME)

clean:
	 rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
