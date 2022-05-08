# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/07 09:33:25 by ekraujin          #+#    #+#              #
#    Updated: 2022/05/08 07:40:52 by ekraujin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

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