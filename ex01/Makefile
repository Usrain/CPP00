# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malebrun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/22 18:14:59 by malebrun          #+#    #+#              #
#    Updated: 2026/03/22 18:20:04 by malebrun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C=c++
CFLAGS = -Wall -Werror -Wextra -g -std=c++98
NAME = phonebook
SRCS = Class/Contact.cpp \
	   Class/PhoneBook.cpp \
	   srcs/main.cpp

OBJ_DIR = .build/
OBJS = $(SRCS:%.cpp=$(OBJ_DIR)%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(C) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o:%.cpp
	@mkdir -p $(dir $@)
	$(C) $(CFLAGS) $< -c -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: all fclean clean re
