# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/05 15:18:03 by xinu              #+#    #+#              #
#    Updated: 2021/05/06 16:04:33 by xinu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 0010_problem
FLAGS = -Wall -Wextra -Werror

FILES= \
	0010_problem

SRCS = $(addsuffix .c, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

.PHONY: all clean fclean re

all: $(OBJS)
	gcc -o $(NAME) $(FLAGS) $(OBJS)


$(OBJS):
	gcc -c $(FLAGS) $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all
