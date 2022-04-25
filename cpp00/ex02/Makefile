# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/24 17:38:12 by ekraujin          #+#    #+#              #
#    Updated: 2022/04/25 07:25:53 by ekraujin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = Account.cpp tests.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ) $(NAME)

re: clean all

.PHONY: all clean re
