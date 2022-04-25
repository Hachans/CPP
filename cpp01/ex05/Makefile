# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/25 16:21:11 by ekraujin          #+#    #+#              #
#    Updated: 2022/04/25 16:35:51 by ekraujin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = karen

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