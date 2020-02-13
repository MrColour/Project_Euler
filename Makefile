# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmira <kmira@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/08 10:45:56 by xinu              #+#    #+#              #
#    Updated: 2020/02/13 09:24:23 by kmira            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

fclean:
	make fclean -C 0001_problem
	make fclean -C 0002_problem

save: fclean
	git add .
	git commit -m "msg: $(MSG)"
	git push
