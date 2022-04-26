# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/24 17:38:12 by ekraujin          #+#    #+#              #
#    Updated: 2022/04/25 13:00:13 by ekraujin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = Account.cpp tests.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all clean re
