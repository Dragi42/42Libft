# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/18 18:19:19 by dpaunovi          #+#    #+#              #
#    Updated: 2019/01/25 18:14:11 by dpaunovi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

RESET = \033[0m
YELLOW = \033[32m
CYAN = \033[36m
RED = \033[31m

EXEC = libft.a
CC = clang
CFLAGS = -Wall -Wextra -Werror
LDFLAGS =

HEADERS = headers/

SRC_PUT = $(wildcard put/*.c)
SRC_STR = $(wildcard str/*.c)
SRC_IS = $(wildcard is/*.c)
SRC_MEM = $(wildcard mem/*.c)
SRC_LST = $(wildcard lst/*.c)
SRC_OTHER = $(wildcard other/*.c)

OBJ_PUT = $(SRC_PUT:.c=.o)
OBJ_STR = $(SRC_STR:.c=.o)
OBJ_IS = $(SRC_IS:.c=.o)
OBJ_MEM = $(SRC_MEM:.c=.o)
OBJ_LST = $(SRC_LST:.c=.o)
OBJ_OTHER = $(SRC_OTHER:.c=.o)
OBJ = $(OBJ_PUT) $(OBJ_STR) $(OBJ_IS) $(OBJ_MEM) $(OBJ_LST) $(OBJ_OTHER)

OPTION = -I $(HEADERS)

all: $(EXEC)

$(EXEC): $(OBJ)
	@ar rc $(EXEC) $(OBJ)
	@echo "$(YELLOW)$(EXEC) created$(RESET)"

%.o: %.c
	$(CC) $(CFLAGS) $(OPTION) -o $@ -c $<

clean:
	@rm -f $(OBJ)
	@echo "$(CYAN)Files .o deleted$(RESET)"

fclean: clean
	@rm -f $(EXEC)
	@echo "$(RED)$(EXEC) deleted$(RESET)"

re: fclean all
