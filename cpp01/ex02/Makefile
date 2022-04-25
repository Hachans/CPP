# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/25 09:05:05 by ekraujin          #+#    #+#              #
#    Updated: 2022/04/25 09:07:39 by ekraujin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = strptr

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all clean re