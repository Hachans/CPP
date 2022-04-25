# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/25 10:38:21 by ekraujin          #+#    #+#              #
#    Updated: 2022/04/25 10:38:25 by ekraujin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

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