# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/25 19:49:50 by ekraujin          #+#    #+#              #
#    Updated: 2022/04/25 19:56:56 by ekraujin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = karenFilter

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp Karen.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all clean re