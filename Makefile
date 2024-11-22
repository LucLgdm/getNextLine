# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 15:28:55 by lde-merc          #+#    #+#              #
#    Updated: 2024/11/21 10:17:38 by lde-merc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main
CC = cc
CFLAGS = -Wall -Werror -Wextra -g -D BUFFER_SIZE=42
HEADER = ft_printf.h
FILES = get_next_line.c get_next_line_utils.c
SRC = $(FILES)
OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
		$(CC) $(CCFLAGS) $(OBJ) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re