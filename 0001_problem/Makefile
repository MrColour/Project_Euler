# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmira <kmira@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/08 10:45:16 by xinu              #+#    #+#              #
#    Updated: 2020/02/13 12:50:04 by kmira            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 0001_problem
FLAGS = -Wall -Wextra -Werror

FILES= \
	0001_problem

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
