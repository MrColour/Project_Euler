# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmira <kmira@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/13 09:29:58 by kmira             #+#    #+#              #
#    Updated: 2020/02/13 09:30:28 by kmira            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 0003_problem
FLAGS = -Wall -Wextra -Werror

FILES= \
	0003_problem

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
