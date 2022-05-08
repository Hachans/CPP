# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/07 10:41:17 by ekraujin          #+#    #+#              #
#    Updated: 2022/05/07 10:41:22 by ekraujin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array

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