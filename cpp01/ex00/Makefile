# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/25 07:22:15 by ekraujin          #+#    #+#              #
#    Updated: 2022/04/25 08:05:13 by ekraujin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ) $(NAME)

re: clean all

.PHONY: all clean re