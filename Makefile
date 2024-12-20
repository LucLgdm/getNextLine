# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 15:28:55 by lde-merc          #+#    #+#              #
#    Updated: 2024/11/22 17:02:49 by lde-merc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main
CC = cc
CFLAGS = -Wall -Werror -Wextra -g -D BUFFER_SIZE=10000000
HEADER = ft_printf.h
FILES = get_next_line.c get_next_line_utils.c
FILES_B = get_next_line_bonus.c get_next_line_utils_bonus.c
SRC = $(FILES)
SRCB = $(FILES_B)
OBJ = $(FILES:.c=.o)
OBJ_B = $(FILES_B:.c=.o)

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

bonus: $(OBJ) $(OBJ_B) $(NAME)
		$(CC) $(CCFLAGS) $(OBJ_B) -o $(NAME)

.PHONY: all clean fclean re bonus