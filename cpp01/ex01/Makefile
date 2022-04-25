# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/25 08:30:37 by ekraujin          #+#    #+#              #
#    Updated: 2022/04/25 09:02:05 by ekraujin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = horde

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp Zombie.cpp zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ) $(NAME)

re: clean all

.PHONY: all clean re